----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:11:00 03/21/2024 
-- Design Name: 
-- Module Name:    rs232_receiver - Behavioral 
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

entity rs232_receiver is
	Port ( 
		data_in : in  STD_LOGIC;
      clock : in  STD_LOGIC;
      reset : in  STD_LOGIC;
		
      data_out : out  STD_LOGIC_VECTOR (7 downto 0);
      ready : out  STD_LOGIC
	);
end rs232_receiver;

architecture Behavioral of rs232_receiver is

	type state is (idle, active);
	signal current_state : state;
	signal next_state : state;
	
	signal internal_ready : std_logic := '0';
	signal received_bit : std_logic_vector(3 downto 0);
	signal data_register : std_logic_vector(7 downto 0) := (others => '0');
	signal baud_clock : std_logic;
	signal do_sampling : std_logic;
	
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

	-- data_register
	process (baud_clock, received_bit) begin
		if falling_edge(baud_clock) then
			case received_bit is
				when "0000" =>
					data_register <= data_register; 
				when "1010" =>
					data_register <= data_register;
				when "1001" =>
					data_register <= data_register;
				when others =>
					data_register <= data_in & data_register(7 downto 1);
			end case;
		end if;
	end process;

	-- instancja licznika
	counter: modulo10_counter port map (
		clock=>baud_clock,
		clock_enable=>do_sampling,
		out_data=>received_bit
	);
	
	-- instancja dzielnika zegara
	clock_divider: divider_50MHz_to_115200Hz port map (
		clock_50MHz=>clock,
		enable=>do_sampling,
		clock_115200Hz=>baud_clock
	);
	
	-- do_sampling
	with current_state select do_sampling <=
		'1' when active,
		'0' when others;

	-- ready
	ready <= internal_ready;
	
	-- internal_ready
	process (received_bit, current_state, reset, next_state) begin
		case current_state is
			when active =>
				case received_bit is
					when "1010" =>
						internal_ready <= '1';
					when others =>
						internal_ready <= '0';
				end case;
			when others =>
				internal_ready <= '0';
		end case;
	end process;
	
	-- data_out
	data_out <= data_register;
	
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
	process (current_state, data_in, internal_ready) begin
		next_state <= current_state;
		case current_state is
				-- stan bezczynnoœci
				when idle =>
					if data_in = '0' then
						next_state <= active;
					end if;
				-- stan aktywny
				when active =>
					if internal_ready = '1' then
						next_state <= idle;
					end if;
		end case;
	end process;
	
	

end Behavioral;

