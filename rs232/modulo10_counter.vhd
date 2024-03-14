----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:19:46 03/07/2024 
-- Design Name: 
-- Module Name:    register_10bit - Behavioral 
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

entity modulo10_counter is
    Port ( clock : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  clock_enable : in STD_LOGIC;
			  
           out_data : out  STD_LOGIC_VECTOR (3 downto 0));
end modulo10_counter;

architecture Behavioral of modulo10_counter is

	signal i : UNSIGNED(3 downto 0);

begin

	-- out_data
	process(clock)
	begin
		if rising_edge(clock) then
			if reset = '1' then
				i <= "0000";
			elsif clock_enable = '1' then
				if i = "1001" then
					i <= "0000";
				else 
					i <= i + 1;
				end if;
			end if;
		end if;
	end process;

end Behavioral;

