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
			  clock_enable : in STD_LOGIC;
           out_data : out  STD_LOGIC_VECTOR (3 downto 0));
end modulo10_counter;

architecture Behavioral of modulo10_counter is

	signal i : UNSIGNED(3 downto 0) := "0000";

begin

	-- wewnêtrzny sygna³ zliczaj¹cy i
	process(clock, clock_enable)
	begin
		if clock_enable = '0' then
			i <= "0000";
		elsif rising_edge(clock) then
			i <= i + 1;
		end if;
	end process;
	
	-- out_data
	out_data <= STD_LOGIC_VECTOR(i);

end Behavioral;

