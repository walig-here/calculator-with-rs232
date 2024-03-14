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
	
	signal data_register : STD_LOGIC_VECTOR (9 downto 0);
	signal clock_enable : STD_LOGIC;
	signal bits_sent: STD_LOGIC_VECTOR (9 downto 0);
	
	component modulo10_counter is
		port(
			clock : in  STD_LOGIC;
         reset : in  STD_LOGIC;
			clock_enable : in STD_LOGIC;
         out_data : out  STD_LOGIC_VECTOR (3 downto 0)
		);
	end component;

begin

	-- instancja licznika
	counter: modulo10_counter port map (
		clock=>clock,
		reset=>reset,
		clock_enable=>clock_enable,
		out_data=>bits_sent
	);
	
	-- clock enable
	with current_state select clock_enable <=
		'1' when active,
		'0' when idle;

	-- busy
	with current_state select busy <=
		'1' when active,
		'0' when idle;
	
	-- data_out
	with current_state select data_out <=
		'1' when idle,
		data_register(0) when active;
		
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
	process (current_state, start, bits_sent) begin
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
					if bits_sent = "1001" then
						next_state <= idle;
					end if;
		end case;
	end process;
	
	-- data_register
	process(bits_sent,current_state) begin
		if current_state = active then
			case bits_sent is
				-- wys³ano 0 bitów
				when "0000" =>
					data_register <= "0" & data_input & "1";
				-- wys³ano 9 bitów
				when others =>
					data_register 
			end case;
		end if;
	end process;
		
end Behavioral;

