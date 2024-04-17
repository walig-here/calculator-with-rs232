----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:13:46 04/17/2024 
-- Design Name: 
-- Module Name:    calculator - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity calculator is
		Port ( 
			calc_input : in  STD_LOGIC_VECTOR (7 downto 0);			-- cyfry i operatory zadawane na wejœcie kalkualtora
         read_input : in  STD_LOGIC;								-- czy ma zostaæ zapamiêtany bajt z wejœcia
         reset : in  STD_LOGIC;										-- resetowanie kalkulatora do stanu pocz¹tkowego
         result_sent : in  STD_LOGIC;								-- czy wynik zosta³ w poprawnie przes³any
			clock : in STD_LOGIC;
			
         send : out  STD_LOGIC;										-- czy rozpocz¹æ wysy³anie wyniku?
         result : out  STD_LOGIC_VECTOR (11 downto 0)			-- wynik
		);
end calculator;

architecture Behavioral of calculator is

	-- #=================================================================#
	-- | STANY																				|
	-- #=================================================================#
	-- |	idle			 |	bezczynnoœæ, nie wprowadzono jeszcze nic			|
	-- |	argument_1	 |	podawany jest argument pierwszy						|
	-- |	operator		 |	podawany jest operator									|
	-- |	argument_2	 |	podawany jest argument drugi							|
	-- |	sending		 |	wysy³any jest wynik										|
	-- #=================================================================#
	type state is (idle, argument_1, operator, argument_2, sending);
	signal current_state : state;
	signal next_state 	: state;
	
	-- #=================================================================#
	-- | REJESTRY																			|
	-- #=================================================================#
	signal result_register 		: UNSIGNED(11 downto 0) := (others => '0');
	signal operator_register 	: STD_LOGIC_VECTOR(1 downto 0) := (others => '0');
	
	-- #=================================================================#
	-- | KODOWANIE WEJŒCIA																|
	-- #=================================================================#
	-- | 10000				| operator +												|
	-- | 10001				| operator -												|
	-- | 10010				| operator *												|
	-- | 10011				| operator /												|
	-- | 0****				| cyfra heksadecymalna kodowana od 0 do 3 bitu	|
	-- #=================================================================#
	constant EQU : STD_LOGIC_VECTOR(4 downto 0) := "1" & x"4";
	
	-- #=================================================================#
	-- | TRANSKODER ASCII -> SYMBOL KALKULATORA									|
	-- #=================================================================#
	component ascii_to_calc_symbol is
		port(
			ascii : in  STD_LOGIC_VECTOR (7 downto 0);
         calc_symbol : out  STD_LOGIC_VECTOR (4 downto 0);
         symbol_valid : out  STD_LOGIC
		);
	end component;
	signal input_symbol : STD_LOGIC_VECTOR(4 downto 0);
	signal input_valid : STD_LOGIC;
	
	-- #=================================================================#
	-- | REJESTRY PRZESUWNE 12 BITOWE												|	
	-- #=================================================================#
	component register_12_synchronized is
		port(
         read_input : in  STD_LOGIC;
         reset : in  STD_LOGIC;
			clock : in STD_LOGIC;
         data_in : in  STD_LOGIC_VECTOR (3 downto 0);
         data_out : out  STD_LOGIC_VECTOR (11 downto 0)
		);
	end component;
	signal argument_register_1 : STD_LOGIC_VECTOR(11 downto 0) := (others => '0');
	signal argument_register_2 : STD_LOGIC_VECTOR(11 downto 0) := (others => '0');
	
	signal read_digit : STD_LOGIC;
	signal read_argument_1 : STD_LOGIC;
	signal read_argument_2 : STD_LOGIC;
	signal reset_registers : STD_LOGIC;
	
begin

	-- reset_registers
	process (next_state, current_state, reset) begin
		if reset = '1' then
			reset_registers <= '1';
		else
			case current_state is
				when sending =>
					if next_state <= idle then
						reset_registers <= '1';
					else
						reset_registers <= '0';
					end if;
				when others =>
					reset_registers <= '0';
			end case;
		end if;
	end process;

	-- instancja transkodera wejœciowego
	input_transcoder: ascii_to_calc_symbol port map (
		ascii=>calc_input,
		calc_symbol=>input_symbol,
		symbol_valid=>input_valid
	);
	
	-- argument_register_1
	input_register_1: register_12_synchronized port map (
		read_input=>read_argument_1,
		reset=>reset_registers,
		data_in=>input_symbol(3 downto 0),
		data_out=>argument_register_1,
		clock=>clock
	);
	
	-- argument_register_2
	input_register_2: register_12_synchronized port map (
		read_input=>read_argument_2,
		reset=>reset_registers,
		data_in=>input_symbol(3 downto 0),
		data_out=>argument_register_2,
		clock=>clock
	);
	
	-- read_digit
	read_digit <= read_input and input_valid and (not input_symbol(4));
	
	-- read_argument_1
	process(read_digit, current_state) begin
		if read_digit = '1' then
			case current_state is
				when idle =>
					read_argument_1 <= '1';
				when argument_1 =>
					read_argument_1 <= '1';
				when others =>
					read_argument_1 <= '0';
			end case;
		else
			read_argument_1 <= '0';
		end if;
	end process;
	
	-- read_argument_2
	process(read_digit, current_state) begin
		if read_digit = '1' then
			case current_state is
				when operator =>
					read_argument_2 <= '1';
				when argument_2 =>
					read_argument_2 <= '1';
				when others =>
					read_argument_2 <= '0';
			end case;
		else
			read_argument_2 <= '0';
		end if;
	end process;

	-- current_state
	process(clock) begin
		if rising_edge(clock) then
			if reset = '1' then
				current_state <= idle;
			else
				current_state <= next_state;
			end if;
		end if;
	end process;
	
	-- result_register
	process (argument_register_1, argument_register_2, operator_register) begin
		case operator_register is
			when "00" =>
				result_register <= UNSIGNED(argument_register_1) + UNSIGNED(argument_register_2);
			when "01" =>
				result_register <= UNSIGNED(argument_register_1) - UNSIGNED(argument_register_2);
			when others =>
				result_register <= (others => '0');
		end case;
	end process;
	
	-- operator_register
	process (current_state, input_valid, input_symbol, read_input) begin
		case current_state is
			when argument_1 =>
				if read_input = '1' and input_valid = '1' and input_symbol(4) = '1' then
					operator_register <= input_symbol(1 downto 0);
				else
					operator_register <= (others => '0');
				end if;
			when operator =>
				if read_input = '1' and input_valid = '1' and input_symbol(4) = '1' then
					operator_register <= input_symbol(1 downto 0);
				else
					operator_register <= (others => '0');
				end if;
			when others =>
				operator_register <= (others => '0');
		end case;
	end process;
	
	-- send
	with current_state select send <=
		'1' when sending,
		'0' when others;
	
	-- result_byte
	result <= STD_LOGIC_VECTOR(result_register);
	
	-- next_state
	process (current_state, read_input, input_valid, input_symbol, result_sent) begin
		next_state <= current_state;
		if read_input = '1' and input_valid = '1' then
			case current_state is
				when idle =>
					if input_symbol(4) = '0' then
						next_state <= argument_1;
					end if;
				when argument_1 =>
					if input_symbol(4) = '1' and input_symbol /= EQU then
						next_state <= operator;
					end if;
				when operator =>
					if input_symbol(4) = '0' then
						next_state <= argument_2;
					end if;
				when argument_2 =>
					if input_symbol = EQU then
						next_state <= sending;
					end if;
				when others =>
					next_state <= current_state;
			end case;
		else
			case current_state is
				when sending =>
					if result_sent = '1' then
						next_state <= idle;
					end if;
				when others =>
					next_state <= current_state;
			end case;
		end if;
	end process;

end Behavioral;

