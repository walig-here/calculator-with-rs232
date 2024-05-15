--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:04:14 05/15/2024
-- Design Name:   
-- Module Name:   C:/Users/Dawid/Desktop/calculator-with-rs232-main/rs232/test_impulse_generator.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: impulse_generator
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
 
ENTITY test_impulse_generator IS
END test_impulse_generator;
 
ARCHITECTURE behavior OF test_impulse_generator IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT impulse_generator
    PORT(
         input_signal : IN  std_logic;
         clock : IN  std_logic;
         output_impulse : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input_signal : std_logic := '0';
   signal clock : std_logic := '0';

 	--Outputs
   signal output_impulse : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: impulse_generator PORT MAP (
          input_signal => input_signal,
          clock => clock,
          output_impulse => output_impulse
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
      wait for clock_period * 2 + 2 ns;

      input_signal <= '1', '0' after 40 ns;
		wait until input_signal = '0';
		wait for 4 ns;
		
		input_signal <= '1', '0' after clock_period;

      wait;
   end process;

END;
