----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:50:02 04/17/2024 
-- Design Name: 
-- Module Name:    ascii_to_calc_symbol - Behavioral 
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

entity ascii_to_calc_symbol is
		Port ( 
			ascii : in  STD_LOGIC_VECTOR (7 downto 0);
         calc_symbol : out  STD_LOGIC_VECTOR (4 downto 0) := "0" & x"F";
         symbol_valid : out  STD_LOGIC := '0'
		);
end ascii_to_calc_symbol;

architecture Behavioral of ascii_to_calc_symbol is

	constant ZERO : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"0";
	constant ONE : STD_LOGIC_VECTOR(4 downto 0) 		:= "0" & x"1";
	constant TWO : STD_LOGIC_VECTOR(4 downto 0) 		:= "0" & x"2";
	constant THREE : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"3";
	constant FOUR : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"4";
	constant FIVE : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"5";
	constant SIX : STD_LOGIC_VECTOR(4 downto 0) 		:= "0" & x"6";
	constant SEVEN : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"7";
	constant EIGHT : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"8";
	constant NINE : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"9";
	constant TEN : STD_LOGIC_VECTOR(4 downto 0) 		:= "0" & x"A";
	constant ELEVEN : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"B";
	constant TWELVE : STD_LOGIC_VECTOR(4 downto 0) 	:= "0" & x"C";
	constant THIRTEEN : STD_LOGIC_VECTOR(4 downto 0):= "0" & x"D";
	constant FOURTEEN : STD_LOGIC_VECTOR(4 downto 0):= "0" & x"E";
	constant FIFTEEN : STD_LOGIC_VECTOR(4 downto 0) := "0" & x"F";
	
	constant ADD : STD_LOGIC_VECTOR(4 downto 0) 		:= "1" & x"0";
	constant SUB : STD_LOGIC_VECTOR(4 downto 0) 		:= "1" & x"1";
	constant MUL : STD_LOGIC_VECTOR(4 downto 0) 		:= "1" & x"2";
	constant EQU : STD_LOGIC_VECTOR(4 downto 0) 		:= "1" & x"4";

begin

	-- symbol_valid
	with ascii select symbol_valid <=
		'1' 		when x"30",
		'1' 		when x"31",
		'1' 		when x"32",
		'1' 		when x"33",
		'1' 		when x"34",
		'1' 		when x"35",
		'1' 		when x"36",
		'1' 		when x"37",
		'1' 		when x"38",
		'1' 		when x"39",
		'1' 		when x"61",
		'1' 		when x"62",
		'1' 		when x"63",
		'1' 		when x"64",
		'1' 		when x"65",
		'1' 		when x"66",
		'1' 		when x"2B",
		'1' 		when x"2D",
		'1' 		when x"2A",
		'1' 		when x"0D",
		'0'		when others;

	-- calc_symbol
	with ascii select calc_symbol <=
		ZERO 		when x"30",
		ONE 		when x"31",
		TWO 		when x"32",
		THREE 	when x"33",
		FOUR 		when x"34",
		FIVE 		when x"35",
		SIX 		when x"36",
		SEVEN 	when x"37",
		EIGHT 	when x"38",
		NINE 		when x"39",
		TEN 		when x"61",
		ELEVEN 	when x"62",
		TWELVE 	when x"63",
		THIRTEEN when x"64",
		FOURTEEN when x"65",
		FIFTEEN 	when x"66",
		ADD 		when x"2B",
		SUB 		when x"2D",
		MUL 		when x"2A",
		EQU 		when x"0D",
		(others => '0') when others;

end Behavioral;

