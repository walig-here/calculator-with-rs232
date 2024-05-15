--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : calculator_implementacja.vhf
-- /___/   /\     Timestamp : 05/15/2024 16:16:59
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/Users/Dawid/Desktop/calculator-with-rs232-main/rs232/calculator_implementacja.vhf -w C:/Users/Dawid/Desktop/calculator-with-rs232-main/rs232/calculator_implementacja.sch
--Design Name: calculator_implementacja
--Device: spartan3e
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity calculator_implementacja is
   port ( clock    : in    std_logic; 
          data_in  : in    std_logic; 
          reset    : in    std_logic; 
          data_out : out   std_logic);
end calculator_implementacja;

architecture BEHAVIORAL of calculator_implementacja is
   attribute BOX_TYPE   : string ;
   signal busy        : std_logic;
   signal calc_input  : std_logic_vector (7 downto 0);
   signal data_ready  : std_logic;
   signal not_busy    : std_logic;
   signal result      : std_logic_vector (7 downto 0);
   signal result_sent : std_logic;
   signal send        : std_logic;
   component rs232_receiver
      port ( data_in  : in    std_logic; 
             clock    : in    std_logic; 
             reset    : in    std_logic; 
             ready    : out   std_logic; 
             data_out : out   std_logic_vector (7 downto 0));
   end component;
   
   component calculator
      port ( read_input  : in    std_logic; 
             reset       : in    std_logic; 
             result_sent : in    std_logic; 
             clock       : in    std_logic; 
             calc_input  : in    std_logic_vector (7 downto 0); 
             send        : out   std_logic; 
             result      : out   std_logic_vector (7 downto 0));
   end component;
   
   component rs232_transmitter
      port ( start    : in    std_logic; 
             reset    : in    std_logic; 
             clock    : in    std_logic; 
             data_in  : in    std_logic_vector (7 downto 0); 
             data_out : out   std_logic; 
             busy     : out   std_logic);
   end component;
   
   component impulse_generator
      port ( input_signal   : in    std_logic; 
             clock          : in    std_logic; 
             output_impulse : out   std_logic);
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
begin
   XLXI_2 : rs232_receiver
      port map (clock=>clock,
                data_in=>data_in,
                reset=>reset,
                data_out(7 downto 0)=>calc_input(7 downto 0),
                ready=>data_ready);
   
   XLXI_4 : calculator
      port map (calc_input(7 downto 0)=>calc_input(7 downto 0),
                clock=>clock,
                read_input=>data_ready,
                reset=>reset,
                result_sent=>result_sent,
                result(7 downto 0)=>result(7 downto 0),
                send=>send);
   
   XLXI_7 : rs232_transmitter
      port map (clock=>clock,
                data_in(7 downto 0)=>result(7 downto 0),
                reset=>reset,
                start=>send,
                busy=>busy,
                data_out=>data_out);
   
   XLXI_10 : impulse_generator
      port map (clock=>clock,
                input_signal=>not_busy,
                output_impulse=>result_sent);
   
   XLXI_11 : INV
      port map (I=>busy,
                O=>not_busy);
   
end BEHAVIORAL;


