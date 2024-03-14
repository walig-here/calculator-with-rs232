--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:13:53 03/14/2024
-- Design Name:   
-- Module Name:   D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/test_divider50MHz_to_115200Hz.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: divider_50MHz_to_115200Hz
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
 
ENTITY test_divider50MHz_to_115200Hz IS
END test_divider50MHz_to_115200Hz;
 
ARCHITECTURE behavior OF test_divider50MHz_to_115200Hz IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT divider_50MHz_to_115200Hz
    PORT(
         clock_50MHz : IN  std_logic;
         enable : IN  std_logic;
         clock_115200Hz : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock_50MHz : std_logic := '0';
   signal enable : std_logic := '1';

 	--Outputs
   signal clock_115200Hz : std_logic;

   -- Clock period definitions
   constant clock_50MHz_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divider_50MHz_to_115200Hz PORT MAP (
          clock_50MHz => clock_50MHz,
          enable => enable,
          clock_115200Hz => clock_115200Hz
        );

   -- Clock process definitions
   clock_50MHz_process :process
   begin
		clock_50MHz <= '0';
		wait for clock_50MHz_period/2;
		clock_50MHz <= '1';
		wait for clock_50MHz_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		enable <= '0' after 400 * clock_50MHz_period, '1' after 800 * clock_50MHz_period;
      wait;
   end process;

END;
