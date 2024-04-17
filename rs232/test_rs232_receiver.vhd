--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:57:29 03/21/2024
-- Design Name:   
-- Module Name:   C:/Users/lab/Desktop/ucisw-projekt-main/ucisw-projekt-main/rs232/test_rs232_receiver.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: rs232_receiver
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
 
ENTITY test_rs232_receiver IS
END test_rs232_receiver;
 
ARCHITECTURE behavior OF test_rs232_receiver IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT rs232_receiver
    PORT(
         data_in : IN  std_logic;
         clock : IN  std_logic;
         reset : IN  std_logic;
         data_out : OUT  std_logic_vector(7 downto 0);
         ready : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data_in : std_logic := '1';
   signal clock : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);
   signal ready : std_logic;

   -- Clock period definitions
   constant clock_period : time := 20 ns;
	constant baud_period : time := 8690 ns;
	
	-- Sta³e
	type FRAME is array (9 downto 0) of STD_LOGIC;
	type MESSAGE is array ( POSITIVE range <> ) of FRAME;
	constant frame_1 : FRAME := '1' & x"AA" & '0';
	constant test_message : MESSAGE(1 to 5) := (	
		'1' & x"48" & '0', 	-- H	w transmisji: 0 00010010 1
		'1' & x"65" & '0', 	-- e	w transmisji: 0 10100110 1
		'1' & x"6c" & '0', 	-- l	w transmisji: 0 00110110 1
		'1' & x"6c" & '0', 	-- l	w transmisji: 0 00110110 1
		'1' & x"6f" & '0'	 	-- o	w transmisji: 0 11110110 1
	);
	constant frame_2 : FRAME := '1' & x"FF" & '0';
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: rs232_receiver PORT MAP (
          data_in => data_in,
          clock => clock,
          reset => reset,
          data_out => data_out,
          ready => ready
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
		wait for 1.25 * baud_period + 2 ns;
		
		-- Odebranie pojedynczej ramki
		for i in 0 to 9 loop
			data_in <= frame_1(i);
			wait for baud_period;
		end loop;
		data_in <= '1';
		wait for 2 * baud_period + 1 ns;
		
		-- Odbranie wiadomoœci Hello
		for i in 1 to 5 loop
			for j in 0 to 9 loop
				data_in <= test_message(i)(j);
				wait for baud_period;
			end loop;
		end loop;
		wait for 2 * baud_period;
		
		-- Zresetowanie w trakcie odbioru
		for i in 0 to 3 loop
			data_in <= frame_2(i);
			wait for baud_period;
		end loop;
		reset <= '1', '0' after 0.1 * baud_period;
		data_in <= '1';
		
		-- Wznowienie wys³ania
		for i in 0 to 9 loop
			data_in <= frame_2(i);
			wait for baud_period;
		end loop;
	
		wait;
   end process;

END;
