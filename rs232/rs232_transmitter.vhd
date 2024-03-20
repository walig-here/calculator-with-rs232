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
	
	signal data_register : STD_LOGIC_VECTOR (8 downto 0) := (others => '1');
	signal internal_busy : STD_LOGIC;
	signal transmitted_bit: STD_LOGIC_VECTOR (3 downto 0);
	signal baud_clock : STD_LOGIC;
	
	component modulo10_counter is
		port(
			clock : in  STD_LOGIC;
			clock_enable : in STD_LOGIC;
         out_data : out  STD_LOGIC_VECTOR (3 downto 0)
		);
	end component;
	
	component divider_50MHz_to_115200Hz is
		port ( 
			clock_50MHz : in  STD_LOGIC;
			enable : in STD_LOGIC;
			clock_115200Hz : out  STD_LOGIC
		);
	end component;

begin

	-- instancja licznika
	counter: modulo10_counter port map (
		clock=>baud_clock,
		clock_enable=>internal_busy,
		out_data=>transmitted_bit
	);
	
	-- instancja dzielnika zegara
	clock_divider: divider_50MHz_to_115200Hz port map (
		clock_50MHz=>clock,
		enable=>internal_busy,
		clock_115200Hz=>baud_clock
	);
	
	-- internal_busy
	with current_state select internal_busy <=
		'1' when active,
		'0' when idle;

	-- busy
	busy <= internal_busy;
		
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
	process(start, internal_busy, baud_clock, reset, data_in) begin
		if reset = '1' then
			data_register <= (others => '1');
		elsif start = '1' and internal_busy = '0' then
			data_register <= data_in & '0';
		elsif rising_edge(baud_clock) then
			data_register <= '1' & data_register(8 downto 1);
		else
			data_register <= data_register;
		end if;
	end process;
	
	-- data_out
	data_out <= data_register(0);
		
end Behavioral;

