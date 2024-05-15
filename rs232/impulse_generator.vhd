----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:59:48 05/15/2024 
-- Design Name: 
-- Module Name:    impulse_generator - Behavioral 
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

entity impulse_generator is
    Port ( input_signal : in  STD_LOGIC;
           clock : in  STD_LOGIC;
           output_impulse : out  STD_LOGIC := '0');
end impulse_generator;

architecture Behavioral of impulse_generator is

	signal internal_output_impulse : STD_LOGIC := '0';
	type state is (activated, deactivated);
	signal current_state : state;
	signal next_state : state;

begin

	-- output_impulse
	output_impulse <= internal_output_impulse;

	-- internal_output_impulse
	process (current_state, clock) begin
		if rising_edge(clock) then
			case current_state is
				when activated =>
					if input_signal = '1' then
						internal_output_impulse <= '1';
					else
						internal_output_impulse <= '0';
					end if;
				when deactivated =>
					internal_output_impulse <= '0';
			end case;
		end if;
	end process;

	-- current_state
	process(clock) begin
		if rising_edge(clock) then
			current_state <= next_state;
		end if;
	end process;
	
	-- next_state
	process (current_state, input_signal) begin
		next_state <= current_state;
		case current_state is
				-- generowaæ impuls
				when activated =>
					if input_signal = '1' then
						next_state <= deactivated;
					else
						next_state <= activated;
					end if;
				-- nie generowaæ impulsu
				when deactivated =>
					if input_signal = '0' then
						next_state <= activated;
					else
						next_state <= deactivated;
					end if;
		end case;
	end process;

end Behavioral;

