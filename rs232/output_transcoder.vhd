----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:47:57 05/15/2024 
-- Design Name: 
-- Module Name:    output_transcoder - Behavioral 
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

entity output_transcoder is
    Port ( calc_digit : in  STD_LOGIC_VECTOR (3 downto 0);
           ascii_output : out  STD_LOGIC_VECTOR (7 downto 0));
end output_transcoder;

architecture Behavioral of output_transcoder is

begin

	-- ascii_output
	with calc_digit select ascii_output <=
		x"30" when x"0",
		x"31" when x"1",
		x"32" when x"2",
		x"33" when x"3",
		x"34" when x"4",
		x"35" when x"5",
		x"36" when x"6",
		x"37" when x"7",
		x"38" when x"8",
		x"39" when x"9",
		x"61" when x"A",
		x"62" when x"B",
		x"63" when x"C",
		x"64" when x"D",
		x"65" when x"E",
		x"66" when x"F",
		x"00" when others;

end Behavioral;

