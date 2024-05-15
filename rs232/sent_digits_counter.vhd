----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:35:45 04/18/2024 
-- Design Name: 
-- Module Name:    sent_digits_counter - Behavioral 
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

entity sent_digits_counter is
    Port ( reset : in  STD_LOGIC;
           clock : in  STD_LOGIC;
			  clock_enable : in STD_LOGIC;
           counter_out : out  STD_LOGIC_VECTOR (1 downto 0));
end sent_digits_counter;

architecture Behavioral of sent_digits_counter is

	signal i : UNSIGNED(1 downto 0) := "10";

begin
	
	-- wewnêtrzny sygna³ zliczaj¹cy i
	process(clock)
	begin
		if rising_edge(clock) and clock_enable = '1' then
			if reset = '1' then
				i <= (others => '0');
			elsif i = "10" then
				i <= "00";
			else
				i <= i + 1;
			end if;
		end if;
	end process;
	
	-- out_data
	counter_out <= STD_LOGIC_VECTOR(i);

end Behavioral;

