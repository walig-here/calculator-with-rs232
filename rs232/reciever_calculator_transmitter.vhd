-- Vhdl test bench created from schematic C:\Users\Dawid\Desktop\calculator-with-rs232-main\rs232\calculator_implementacja.sch - Wed May 15 13:56:43 2024
--
-- Notes: 
-- 1) This testbench template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the unit under test.
-- Xilinx recommends that these types always be used for the top-level
-- I/O of a design in order to guarantee that the testbench will bind
-- correctly to the timing (post-route) simulation model.
-- 2) To use this template as your testbench, change the filename to any
-- name of your choice with the extension .vhd, and use the "Source->Add"
-- menu in Project Navigator to import the testbench. Then
-- edit the user defined section below, adding code to generate the 
-- stimulus for your design.
--
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
LIBRARY UNISIM;
USE UNISIM.Vcomponents.ALL;
ENTITY calculator_implementacja_calculator_implementacja_sch_tb IS
END calculator_implementacja_calculator_implementacja_sch_tb;
ARCHITECTURE behavioral OF 
      calculator_implementacja_calculator_implementacja_sch_tb IS 

   COMPONENT calculator_implementacja
   PORT( reset	:	IN	STD_LOGIC; 
          data_in	:	IN	STD_LOGIC; 
          clock	:	IN	STD_LOGIC; 
          busy	:	OUT	STD_LOGIC; 
          data_out	:	OUT	STD_LOGIC);
   END COMPONENT;

   SIGNAL reset	:	STD_LOGIC := '0';
   SIGNAL data_in	:	STD_LOGIC := '1';
   SIGNAL clock	:	STD_LOGIC;
   SIGNAL busy	:	STD_LOGIC;
   SIGNAL data_out	:	STD_LOGIC;
	
	-- Clock period definitions
   constant clock_period : time := 20 ns;
	constant baud_period : time := 8690 ns;
	
	-- DANE WEJŒCIOWE
	type FRAME is array (9 downto 0) of STD_LOGIC;
	type MESSAGE is array ( POSITIVE range <> ) of FRAME;
	constant expression_1 : MESSAGE(1 to 4) := (	
		'1' & x"65" & '0', 	-- E
		'1' & x"2B" & '0', 	-- +
		'1' & x"66" & '0', 	-- F
		'1' & x"0D" & '0' 	-- ENTER
	);

BEGIN

   UUT: calculator_implementacja PORT MAP(
		reset => reset, 
		data_in => data_in, 
		clock => clock, 
		result_sent => result_sent, 
		busy => busy, 
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

-- *** Test Bench - User Defined Section ***
   tb : PROCESS
   BEGIN
      wait for 1.25 * baud_period + 2 ns;
		
		-- Odbranie wiadomoœci Hello
		for i in 1 to 5 loop
			for j in 0 to 9 loop
				data_in <= expression_1(i)(j);
				wait for baud_period;
			end loop;
		end loop;
		wait for 2 * baud_period;
		
		wait;
   END PROCESS;
-- *** End Test Bench - User Defined Section ***

END;
