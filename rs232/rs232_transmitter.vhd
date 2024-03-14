----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:49:40 03/07/2024 
-- Design Name: 
-- Module Name:    rs232_transmitter - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity rs232_transmitter is
    Port ( data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           start : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           clock : in  STD_LOGIC;
			  
           data_out : out  STD_LOGIC;
           busy : out  STD_LOGIC);
end rs232_transmitter;

architecture Behavioral of rs232_transmitter is

	type state is (idle, active);
	signal current_state : state;
	signal next_state : state;
	
	signal data_register : STD_LOGIC_VECTOR (9 downto 0) := (others => '0');
	signal enable_counter : STD_LOGIC;
	signal transmitted_bit: STD_LOGIC_VECTOR (3 downto 0);
	
	component modulo10_counter is
		port(
			clock : in  STD_LOGIC;
			clock_enable : in STD_LOGIC;
         out_data : out  STD_LOGIC_VECTOR (3 downto 0)
		);
	end component;

begin

	-- instancja licznika
	counter: modulo10_counter port map (
		clock=>clock,
		clock_enable=>enable_counter,
		out_data=>transmitted_bit
	);
	
	-- enable_counter
	with current_state select enable_counter <=
		'1' when active,
		'0' when idle;

	-- busy
	with current_state select busy <=
		'1' when active,
		'0' when idle;
		
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
	
	-- next_state
	process (current_state, start, transmitted_bit) begin
		next_state <= current_state;
		case current_state is
				-- stan bezczynnoœci
				when idle =>
					if start = '1' then
						next_state <= active;
					end if;
				-- stan aktywny
				when active =>
					-- gdy wys³aliœmy wszystkie bity w ramce, to wracamy do stanu nieaktywnoœci
					if transmitted_bit = "1010" then
						next_state <= idle;
					end if;
		end case;
	end process;
	
	-- data_register
	process(transmitted_bit, current_state, data_in) begin
		if current_state = active then
			case transmitted_bit is
				when "0000" =>
					data_register <= "1" & data_in & "0";
				when others =>
					data_register <= "1" & data_register(9 downto 1);
			end case;
		else
			data_register <= (others => '1');
		end if;
	end process;
	
	-- data_out
	process (current_state, transmitted_bit, data_register) begin
		case current_state is
			when idle =>
				data_out <= '1';
			when active =>
				case transmitted_bit is
					when "0000" =>
						data_out <= '0';
					when others =>
						data_out <= data_register(0);
				end case;
		end case;
	end process;
		
end Behavioral;

