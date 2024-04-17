--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:51:30 04/17/2024
-- Design Name:   
-- Module Name:   C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/test_register_12_synchronized.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_12_synchronized
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
 
ENTITY test_register_12_synchronized IS
END test_register_12_synchronized;
 
ARCHITECTURE behavior OF test_register_12_synchronized IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_12_synchronized
    PORT(
         read_input : IN  std_logic;
         reset : IN  std_logic;
         clock : IN  std_logic;
         data_in : IN  std_logic_vector(3 downto 0);
         data_out : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal read_input : std_logic := '0';
   signal reset : std_logic := '0';
   signal clock : std_logic := '0';
   signal data_in : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal data_out : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant clock_period : time := 5 ns;
 
	-- DANE WEJŒCIOWE
	type HEX_DIGIT is array (3 downto 0) of STD_LOGIC;
	type INPUT_DATA is array ( POSITIVE range <> ) of HEX_DIGIT;
	constant number_1 : INPUT_DATA(1 to 3) := (x"1", x"A", x"D");
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_12_synchronized PORT MAP (
          read_input => read_input,
          reset => reset,
          clock => clock,
          data_in => data_in,
          data_out => data_out
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
      wait for 2 ns;
		
		-- 1) Zapisanie liczby 1AD
		for i in number_1'RANGE loop
			data_in <= STD_LOGIC_VECTOR(number_1(i));
			read_input <= '1', '0' after clock_period;
			wait for clock_period + 2 ns;
		end loop;
		
		-- 2) Wyczyszczenie rejestru
		reset <= '1', '0' after clock_period;
		wait for clock_period + 2 ns;
		
		-- 3) Wgrane liczby 1AD ale bez aktywnego trybu czytania
		for i in number_1'RANGE loop
			data_in <= STD_LOGIC_VECTOR(number_1(i));
			wait for clock_period + 2 ns;
		end loop;
		
      wait;
   end process;

END;
