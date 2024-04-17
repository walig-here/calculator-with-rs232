--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : calculator_implementacja.vhf
-- /___/   /\     Timestamp : 04/17/2024 20:40:51
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/calculator_implementacja.vhf -w C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/calculator_implementacja.sch
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
   port ( clock       : in    std_logic; 
          data_in     : in    std_logic; 
          reset       : in    std_logic; 
          result_sent : in    std_logic; 
          result      : out   std_logic_vector (11 downto 0); 
          send        : out   std_logic);
end calculator_implementacja;

architecture BEHAVIORAL of calculator_implementacja is
   signal calc_input  : std_logic_vector (7 downto 0);
   signal data_ready  : std_logic;
   component calculator
      port ( read_input  : in    std_logic; 
             reset       : in    std_logic; 
             result_sent : in    std_logic; 
             clock       : in    std_logic; 
             calc_input  : in    std_logic_vector (7 downto 0); 
             send        : out   std_logic; 
             result      : out   std_logic_vector (11 downto 0));
   end component;
   
   component rs232_receiver
      port ( data_in  : in    std_logic; 
             clock    : in    std_logic; 
             reset    : in    std_logic; 
             ready    : out   std_logic; 
             data_out : out   std_logic_vector (7 downto 0));
   end component;
   
begin
   XLXI_1 : calculator
      port map (calc_input(7 downto 0)=>calc_input(7 downto 0),
                clock=>clock,
                read_input=>data_ready,
                reset=>reset,
                result_sent=>result_sent,
                result(11 downto 0)=>result(11 downto 0),
                send=>send);
   
   XLXI_2 : rs232_receiver
      port map (clock=>clock,
                data_in=>data_in,
                reset=>reset,
                data_out(7 downto 0)=>calc_input(7 downto 0),
                ready=>data_ready);
   
end BEHAVIORAL;


