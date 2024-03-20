--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:15:09 03/14/2024
-- Design Name:   
-- Module Name:   D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/test_modulo10_counter.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: modulo10_counter
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
 
ENTITY test_modulo10_counter IS
END test_modulo10_counter;
 
ARCHITECTURE behavior OF test_modulo10_counter IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT modulo10_counter
    PORT(
         clock : IN  std_logic;
         clock_enable : IN  std_logic;
         out_data : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal clock_enable : std_logic := '0';

 	--Outputs
   signal out_data : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clock_period : time := 8690 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: modulo10_counter PORT MAP (
          clock => clock,
          clock_enable => clock_enable,
          out_data => out_data
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
		wait for clock_period * 3/4;
		clock_enable <= '1';
	
		-- przejœcie 1.5 razy przez ca³¹ sekcjencjê licznika i zatrzymanie odliczania
		wait for clock_period * 24.25 + 2 ns;
		clock_enable <= '0';
		
		-- odczekanie chwilê w stanie bez odliczania
		wait for clock_period * 5;
		clock_enable <= '1';
		
      wait;
   end process;

END;
