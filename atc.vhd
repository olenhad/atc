----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:12:18 02/11/2014 
-- Design Name: 
-- Module Name:    atc - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity atc is
    Port ( CLK : in STD_LOGIC;
			  REQ : in  STD_LOGIC;
           TYPE_NUMBER : in  STD_LOGIC_VECTOR(2 downto 0);
           GRANTED : out  STD_LOGIC;
           DENIED : out  STD_LOGIC);
end atc;

architecture Behavioral of atc is

type jet_type is (heavy_jet, light_jet);
type atc_state is (idle, waiting, displaying);

signal clk_div : std_logic;

signal cur_jet_type : jet_type := heavy_jet;
signal prev_jet_type : jet_type := heavy_jet;

signal req_granted : std_logic := '0';
signal waited_for : std_logic_vector(3 downto 0) := (others => '0');

signal current_state : atc_state := idle;

begin

cur_jet_type <= heavy_jet when type_number = "001" or 
										 type_number = "011" or
										 type_number = "111" else
					light_jet;

req_granted <= '1' when cur_jet_type = heavy_jet or 
                        (cur_jet_type = light_jet and prev_jet_type = light_jet) or
								(cur_jet_type = light_jet and prev_jet_type = heavy_jet and waited_for >= x"A")
						 else
					'0';
		
process (CLK)
variable clk_count : std_logic_vector(25 downto 0) := (others => '0');
begin
	if rising_edge(CLK) then
		clk_count := std_logic_vector(unsigned(clk_count) + 1);
		clk_div <= clk_count(25);
	end if;
end process;

process (clk_div)
variable display_count : std_logic_vector(1 downto 0) := (others => '0');
begin
	if rising_edge(clk_div) then
		case current_state is
			when idle =>
				if req = '1' and req_granted = '1' then
					current_state <= displaying;
				elsif req = '1' and req_granted = '0' then
					current_state <= waiting;
				end if;
			when waiting =>
				waited_for <= std_logic_vector(unsigned(waited_for) + 1);
				if req_granted = '1' then
					waited_for <= x"0";
					current_state <= displaying;
				end if;

			when displaying =>
				display_count := std_logic_vector(unsigned(display_count) + 1);
				if display_count = b"11" then
					current_state <= idle;
					display_count := b"00";
				end if;
		end case;
	end if;
end process;

end Behavioral;

