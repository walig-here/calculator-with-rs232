--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:22:56 03/20/2024
-- Design Name:   
-- Module Name:   D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/test_shift_register_in10b_out1b.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shift_register_in10b_out1b
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
 
ENTITY test_shift_register_in10b_out1b IS
END test_shift_register_in10b_out1b;
 
ARCHITECTURE behavior OF test_shift_register_in10b_out1b IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_register_in10b_out1b
    PORT(
         data_in : IN  std_logic_vector(9 downto 0);
         save : IN  std_logic;
         lock_saving : IN  std_logic;
         shift : IN  std_logic;
         clock : IN  std_logic;
         reset : IN  std_logic;
         data_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data_in : std_logic_vector(9 downto 0) := (others => '0');
   signal save : std_logic := '0';
   signal lock_saving : std_logic := '0';
   signal shift : std_logic := '0';
   signal clock : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal data_out : std_logic;

   -- Clock period definitions
   constant clock_period : time := 20 ns;
	
	-- DANE
	type RS232_BYTE is array (9 downto 0) of STD_LOGIC;
	constant rs232_A : RS232_BYTE := '1' & x"41" & '0';
	constant rs232_Z : RS232_BYTE := '1' & x"5a" & '0';
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_register_in10b_out1b PORT MAP (
          data_in => data_in,
          save => save,
          lock_saving => lock_saving,
          shift => shift,
          clock => clock,
          reset => reset,
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
      wait for clock_period + 2 ns;
		
		-- Zapianie litery A do rejestru i jego zablokowanie
		data_in <= std_logic_vector(rs232_A);
		save <= '1';
		lock_saving <= '1', '0' after 10 * clock_period;
		
		-- Wys³anie ca³ej litery A
		shift <= '1';
		wait for clock_period * 9;
		shift <= '0';
		
		-- Zapisanie litery Z do rejestru i jego zablokowanie
		data_in <= std_logic_vector(rs232_Z);
		lock_saving <= '1';
		
		-- Próba wpisania litery A do zablokowanego rejestru
		data_in <= std_logic_vector(rs232_A);
		wait for 2 * clock_period;
		
		-- Wys³anie 4 bitów litery B
		shift <= '1';
		wait for clock_period * 4;
		
		-- Odblokowanei zapisu i wpisanie litery A
		lock_saving <= '0';
		wait for clock_period;
		
		-- Reset rejestru
		reset <= '1';
		
   end process;

END;
