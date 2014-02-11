----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:23:42 02/11/2014 
-- Design Name: 
-- Module Name:    atc_sm - Behavioral 
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

entity atc_sm is
    Port ( cur_jet_type : in  STD_LOGIC;
           prev_jet_type : in  STD_LOGIC;
           seconds_waited : in  STD_LOGIC;
           wait_for : in  STD_LOGIC);
end atc_sm;

architecture Behavioral of atc_sm is

begin


end Behavioral;

