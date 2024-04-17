----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:46:01 04/17/2024 
-- Design Name: 
-- Module Name:    register_12_synchronized - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_12_synchronized is
    Port ( read_input : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  clock : in STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR (3 downto 0);
           data_out : out  STD_LOGIC_VECTOR (11 downto 0));
end register_12_synchronized;

architecture Behavioral of register_12_synchronized is
	
	signal data_register : STD_LOGIC_VECTOR(11 downto 0) := (others => '0');

begin

		-- data_out
		data_out <= data_register;
		
		-- data_register
		process (read_input, data_register, reset, clock) begin
			if rising_edge(clock) then
				if reset = '1' then
					data_register <= (others => '0');
				elsif read_input = '1' then
					data_register <= data_register(7 downto 0) & data_in(3 downto 0);
				else
					data_register <= data_register;
				end if;
			end if;
		end process;

end Behavioral;

