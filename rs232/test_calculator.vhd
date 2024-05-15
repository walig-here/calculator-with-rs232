--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:07:31 04/17/2024
-- Design Name:   
-- Module Name:   C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/test_calculator.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: calculator
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
 
ENTITY test_calculator IS
END test_calculator;
 
ARCHITECTURE behavior OF test_calculator IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT calculator
    PORT(
         calc_input : IN  std_logic_vector(7 downto 0);
         read_input : IN  std_logic;
         reset : IN  std_logic;
         result_sent : IN  std_logic;
         clock : IN  std_logic;
         send : OUT  std_logic;
         result : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal calc_input : std_logic_vector(7 downto 0) := (others => '0');
   signal read_input : std_logic := '0';
   signal reset : std_logic := '0';
   signal result_sent : std_logic := '0';
   signal clock : std_logic := '0';

 	--Outputs
   signal send : std_logic;
   signal result : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clock_period : time := 5 ns;
	
	-- DANE WEJŒCIOWE
	type BYTE is array (7 downto 0) of STD_LOGIC;
	type INPUT_DATA is array ( POSITIVE range <> ) of BYTE;
	constant expression_1 : INPUT_DATA(1 to 4) := (	
		x"65", 	-- E
		x"2B", 	-- +
		x"66", 	-- F
		x"0D" 	-- ENTER
	);
	constant expression_2 : INPUT_DATA(1 to 5) := (	
		x"33", 	-- 3
		x"63", 	-- C
		x"2B", 	-- +
		x"36", 	-- 6
		x"0D" 	-- ENTER
	);
	constant expression_3 : INPUT_DATA(1 to 8) := (	
		x"61", 	-- A
		x"61", 	-- A
		x"61", 	-- A
		x"2B", 	-- +
		x"66", 	-- F
		x"66", 	-- F
		x"66", 	-- F
		x"0D" 	-- ENTER
	);
	constant expression_4 : INPUT_DATA(1 to 9) := (	
		x"61", 	-- A
		x"61", 	-- A
		x"61", 	-- A
		x"31",	-- 1
		x"2B", 	-- +
		x"66", 	-- F
		x"66", 	-- F
		x"66", 	-- F
		x"0D" 	-- ENTER
	);
	constant expression_5 : INPUT_DATA(1 to 9) := (	
		x"61", 	-- A
		x"61", 	-- A
		x"61", 	-- A
		x"2B", 	-- +
		x"0D", 	-- ENTER
		x"66", 	-- F
		x"66", 	-- F
		x"66", 	-- F
		x"0D" 	-- ENTER
	);
	constant expression_6 : INPUT_DATA(1 to 9) := (	
		x"61", 	-- A
		x"61", 	-- A
		x"61", 	-- A
		x"2D", 	-- -
		x"2B", 	-- +
		x"66", 	-- F
		x"66", 	-- F
		x"66", 	-- F
		x"0D" 	-- ENTER
	);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: calculator PORT MAP (
          calc_input => calc_input,
          read_input => read_input,
          reset => reset,
          result_sent => result_sent,
          clock => clock,
          send => send,
          result => result
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		wait for clock_period + 1 ns;
	
		-- 1) Dodawanie jednocyfrowych liczb (E+F = 1D)
		for i in expression_1'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_1(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 3 * clock_period + 1 ns;
		
		-- 2) Dodawanie liczb o ró¿nych liczbach cyfr (3C + 6 = 42)
		for i in expression_2'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_2(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 3 * clock_period + 1 ns;
		
		-- 3) Dodawanie trzycyfrowych liczb (AAA+FFF = AA9)
		for i in expression_3'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_3(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 3 * clock_period + 1 ns;
		
		-- 4) Dodawanie trzycyfrowych liczb, gdzie do jednej z nich dano o 1 cyfrê za du¿o (AAA1+FFF = AA0)
		for i in expression_4'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_4(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 3 * clock_period + 1 ns;
		
		-- 5) Dodawanie trzycyfrowych liczb, gdzie przedwczeœnie wciœniêto enter po podawaniu operatora (AAA+FFF = AA0)
		for i in expression_5'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_5(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 2 * clock_period + 1 ns;
		
		-- 6) Dodawanie trzycyfrowych liczb, gdzie zmieniono operator z - na + (AAA+FFF = AA0)
		for i in expression_6'RANGE loop
			calc_input <= STD_LOGIC_VECTOR(expression_6(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 7 ns;
		end loop;
		
		for i in 3 downto 0 loop
			wait for 2 * clock_period + 1.43 ns;
			result_sent <= '1', '0' after clock_period;
		end loop;
		wait for 2 * clock_period + 1 ns;
		
      wait;
   end process;

END;
