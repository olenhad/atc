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
           DENIED : out  STD_LOGIC;
			  WAITED_FOR_DEBUG : out STD_LOGIC_VECTOR(3 downto 0));
end atc;

architecture Behavioral of atc is

type jet_type is (heavy_jet, light_jet);
type atc_state is (idle, displaying);
type wait_state is (idle, count, reset);

signal clk_div : std_logic;

signal cached_type_number : std_logic_vector(2 downto 0);

signal cur_jet_type : jet_type := light_jet;

signal prev_jet_type : jet_type := light_jet;

signal req_granted : std_logic := '0';
signal waited_for : std_logic_vector(3 downto 0) := x"0";

begin

-- cur_jet_type combinationally tells us the jet_type from the current type_number
cur_jet_type <= heavy_jet when type_number = "001" or 
										 type_number = "011" or
										 type_number = "111" else
					 light_jet;

-- req_granted compares the cur_jet_type and prev_jet_type, and a signal called waited_for to determine whether to grant
-- take off. waited for refers to time passed since the last heavy_jet
req_granted <= '1' when cur_jet_type = heavy_jet or 
                        (cur_jet_type = light_jet and prev_jet_type = light_jet) or
								(cur_jet_type = light_jet and prev_jet_type = heavy_jet and waited_for >= x"A")
						 else
					'0';
									  
-- clk_divider to divide the cycle to a smaller frequency		
clk_divider: process (CLK)
variable clk_count : std_logic_vector(25 downto 0) := (others => '0');

begin
	if rising_edge(CLK) then
		clk_count := std_logic_vector(unsigned(clk_count) + 1);
		clk_div <= clk_count(25);
	end if;
end process;

main: process (clk)
-- display_count is used to keep track of how many cycles have elapsed since the atc was displaying the result
variable display_count : std_logic_vector(1 downto 0) := (others => '0');
-- current_state keeps track of the state of the atc. We only have 2 states right now
variable current_state : atc_state := idle;
variable cached_req_granted : std_logic;
variable waited_for_control : wait_state := idle;


begin
	if rising_edge(clk) then
	
		-- idle state asserts no output
		-- Only way out of idle state, is if a req is registered
		if current_state = idle then
			GRANTED <= '0';
			DENIED <= '0';
			if req = '1' then
				cached_req_granted := req_granted;
				current_state := displaying;
					
				if cur_jet_type = heavy_jet then
					waited_for_control := reset;
				else
					if waited_for_control /= idle then
						waited_for_control := count;
					end if;
				end if;
			end if;
		end if;
		-- displaying implies the atc is currently displaying the result. It maintains this state for 3 seconds before 
		-- falling back to idle. 
		if current_state = displaying then
				
			display_count := std_logic_vector(unsigned(display_count) + 1);
			GRANTED <= cached_req_granted;
			DENIED <= not cached_req_granted;
			
			if display_count = b"11" then
			-- display_count is reset before state tranistions
				current_state := idle;
				display_count := b"00";
			-- prev_jet_type is assigedn the value of cur_jet_type. As this is the point where the atc is ready for a new req
				if cached_req_granted = '1' then
					prev_jet_type <= cur_jet_type;
				end if;
			end if;
			
		end if;
		
		-- managing waited_for is independent of the atc state machine
		-- We need to start waiting when we grant a heavy jet
		if waited_for_control = count then
			if waited_for < x"a" then
				waited_for <= std_logic_vector(unsigned(waited_for) + 1);
			else
				waited_for_control := idle;
			end if;
		elsif waited_for_control = idle then
		
		elsif waited_for_control = reset then
			waited_for <= x"1";
			waited_for_control := count;
		end if;
		waited_for_debug <= waited_for;
	end if;
end process;

end Behavioral;

