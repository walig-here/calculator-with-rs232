----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:24:53 03/14/2024 
-- Design Name: 
-- Module Name:    divider_50MHz_to_115200Hz - Behavioral 
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

entity divider_50MHz_to_115200Hz is
    Port ( 
		clock_50MHz : in  STD_LOGIC;
		enable : in STD_LOGIC;
		clock_115200Hz : out  STD_LOGIC
	);
end divider_50MHz_to_115200Hz;

architecture Behavioral of divider_50MHz_to_115200Hz is

	signal ticks_counter : UNSIGNED(15 downto 0) := (others => '0');
	constant increment : UNSIGNED(7 downto 0) := x"97";
	constant counter_max : UNSIGNED(14 downto 0) := (others => '1');
	
begin

	-- ticks_counter
	process(clock_50MHz)
	begin
		if rising_edge(clock_50MHz) then
			if enable = '0' then
				ticks_counter(14 downto 0) <= (others => '0');
				ticks_counter(15) <= '1';
			else
				if ticks_counter(14 downto 0) > counter_max - increment then
					ticks_counter(15) <= not ticks_counter(15);
				end if;
				ticks_counter(14 downto 0) <= ticks_counter(14 downto 0) + increment;
			end if;
		end if;
	end process;
	
	-- clock_115200Hz
	clock_115200Hz <= ticks_counter(15);

end Behavioral;

