----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:35:52 03/20/2024 
-- Design Name: 
-- Module Name:    shift_register_in10b_out1b - Behavioral 
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

entity shift_register_in10b_out1b is
    Port ( 
			  data_in : in  STD_LOGIC_VECTOR (9 downto 0);
           save : in  STD_LOGIC;
           lock_saving : in  STD_LOGIC;
           shift : in  STD_LOGIC;
			  clock : in STD_LOGIC;
			  reset : in STD_LOGIC;
			  
           data_out : out  STD_LOGIC
	  );
end shift_register_in10b_out1b;

architecture Behavioral of shift_register_in10b_out1b is

	type state is (saving_unlocked, saving_locked);
	signal current_state : state;
	signal next_state : state;
	
	signal data_internal : STD_LOGIC_VECTOR(9 downto 0) := (others => '1');

begin

	-- current_state
	process(clock) begin
		if rising_edge(clock) then
			if reset = '1' then
				current_state <= saving_unlocked;
			else
				current_state <= next_state;
			end if;
		end if;
	end process;
	
	-- next_state
	process (current_state, lock_saving) begin
		next_state <= current_state;
		case current_state is
				-- zapisywanie odblokowane
				when saving_unlocked =>
					if lock_saving = '1' then
						next_state <= saving_locked;
					end if;
				-- zapisywanie zablokowane
				when saving_locked =>
					if lock_saving = '0' then
						next_state <= saving_unlocked;
					end if; 
		end case;
	end process;

	-- data_out
	data_out <= data_internal(0);
	
	-- data_internal
	process (shift, save, clock, reset) begin
		data_internal <= data_internal;
		if rising_edge(clock) then
			if reset = '1' then
				data_internal <= (others => '0');
			elsif save = '1' and current_state = saving_unlocked then
				data_internal <= data_in;
			elsif shift = '1' then
				data_internal <= '1' & data_internal(9 downto 1);
			end if;
		end if;
	end process;

end Behavioral;

