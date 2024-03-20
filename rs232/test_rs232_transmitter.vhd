--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:10:31 03/14/2024
-- Design Name:   
-- Module Name:   D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/test_rs232_transmitter.vhd
-- Project Name:  rs232
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: rs232_transmitter
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
 
ENTITY test_rs232_transmitter IS
END test_rs232_transmitter;
 
ARCHITECTURE behavior OF test_rs232_transmitter IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT rs232_transmitter
    PORT(
         data_in : IN  std_logic_vector(7 downto 0);
         start : IN  std_logic;
         reset : IN  std_logic;
         clock : IN  std_logic;
         data_out : OUT  std_logic;
         busy : OUT  std_logic
        );
    END COMPONENT;

   --Inputs
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal start : std_logic := '0';
   signal reset : std_logic := '0';
   signal clock : std_logic := '0';

 	--Outputs
   signal data_out : std_logic;
   signal busy : std_logic;
	
	-- DANE WEJŒCIOWE
	type BYTE is array (7 downto 0) of STD_LOGIC;
	type INPUT_DATA is array ( POSITIVE range <> ) of BYTE;
	constant test_message : INPUT_DATA(1 to 5) := (	
		x"48", 	-- H	w transmisji: 0 00010010 1
		x"65", 	-- e	w transmisji: 0 10100110 1
		x"6c", 	-- l	w transmisji: 0 00110110 1
		x"6c", 	-- l	w transmisji: 0 00110110 1
		x"6f"	 	-- o	w transmisji: 0 11110110 1
	);
	constant test_byte_1 : BYTE := x"61";	-- a	w transmisji: 0 10000110 1
	constant test_byte_2 : BYTE := x"62";	-- b	w transmisji: 0 01000110 1
	constant test_byte_3 : BYTE := x"63";	-- c  w transmisji: 0 11000110 1

   -- Clock period definitions
   constant clock_period : time := 20 ns;
   constant baud_period : time := 8690 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: rs232_transmitter PORT MAP (
          data_in => data_in,
          start => start,
          reset => reset,
          clock => clock,
          data_out => data_out,
          busy => busy
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
		wait for baud_period * 0.75 + 5 ns;
		
		-- 1) Nadawanie wiadomoœci sekwencji
		for i in test_message'RANGE loop
			start <= '1', '0' after 2 * baud_period;
			data_in <= STD_LOGIC_VECTOR(test_message(i)), (others => '0') after 0.25 * baud_period;
			wait until busy = '0';
			wait for 2 ns;
		end loop;
		start <= '0';
		
		-- 2) Nadawanie bajtu 1 bez aktywnego bitu startu
		data_in <= STD_LOGIC_VECTOR(test_byte_1);
		if busy = '1' then
			wait until busy = '0';
		else
			wait for 2*baud_period;
		end if;
	
		-- 3) Nadanie bajtu 1, ale wciœniêcie resetu w trakcie transmisji
		start <= '1', '0' after 2 * baud_period;
		data_in <= STD_LOGIC_VECTOR(test_byte_1), (others => '0') after 0.25 * baud_period;
		reset <= '1' after 4 * baud_period, '0' after 4.5 * baud_period;
		
		
		-- 4) Nadanie bajtu 2
		wait until busy = '0' and reset = '0';
		start <= '1' after 2 ns, '0' after 2 * baud_period + 2 ns;
		data_in <= STD_LOGIC_VECTOR(test_byte_2), (others => '0') after 0.25 * baud_period;
		
		-- 5) Przerwa w nadawaniu
		wait until busy = '0';
		wait for 5 * baud_period;
		
		-- 6) Nadanie bajtu 6
		start <= '1', '0' after 2 * baud_period;
		data_in <= STD_LOGIC_VECTOR(test_byte_3), (others => '0') after 0.25 * baud_period;
		
      wait;
   end process;

END;
