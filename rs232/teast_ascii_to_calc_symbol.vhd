--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:28:24 04/17/2024
-- Design Name:   
-- Module Name:   C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/teast_ascii_to_calc_symbol.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ascii_to_calc_symbol
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY teast_ascii_to_calc_symbol IS
END teast_ascii_to_calc_symbol;
 
ARCHITECTURE behavior OF teast_ascii_to_calc_symbol IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ascii_to_calc_symbol
    PORT(
         ascii : IN  std_logic_vector(7 downto 0);
         calc_symbol : OUT  std_logic_vector(4 downto 0);
         symbol_valid : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ascii : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal calc_symbol : std_logic_vector(4 downto 0);
   signal symbol_valid : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
	
	-- DANE WEJŒCIOWE
	type BYTE is array (7 downto 0) of STD_LOGIC;
	type INPUT_DATA is array ( POSITIVE range <> ) of BYTE;
	constant valid_ascii : INPUT_DATA(1 to 21) := (	
		x"30", x"31", x"32", x"33", x"34", x"35", x"36", x"37", x"38", x"39",
		x"61", x"62", x"63", x"64", x"65", x"66",
		x"2A",	-- *
		x"2B",	-- +
		x"2D",	-- -
		x"2F",	-- /
		x"0D"	-- ENTER
	);
	
	constant invalid_ascii : INPUT_DATA(1 to 5) := (
		x"26", x"69", x"5c", x"45", x"00"
	);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ascii_to_calc_symbol PORT MAP (
          ascii => ascii,
          calc_symbol => calc_symbol,
          symbol_valid => symbol_valid
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
		-- 1) konwersja dopuszczalnych znaków ASCII
      for i in valid_ascii'RANGE loop
			ascii <= STD_LOGIC_VECTOR(valid_ascii(i));
			wait for 10 ns;
		end loop;
		
		-- 2) konwersja niedopuszczalnych znaków ASCII
		for i in invalid_ascii'RANGE loop
			ascii <= STD_LOGIC_VECTOR(invalid_ascii(i));
			wait for 10 ns;
		end loop;
		
		wait;
   end process;

END;
