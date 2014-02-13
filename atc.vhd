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
			  WAITED_FOR_DEBUG : out STD_LOGIC_VECTOR(3 downto 0) -- represents number of seconds since last heavy flight
			  );
end atc;

architecture Behavioral of atc is

-- We have two jet types.
type jet_type is (heavy_jet, light_jet);

-- And two state machines
-- atc_state refers to the whether the system is currently idle, or displaying a result
type atc_state is (idle, displaying);
-- wait_state refers to the state of a counter
type wait_state is (idle, count, reset);

signal clk_div : std_logic;

-- input_jet_type is a signal which always refers to the jet_type that type_number currently is displaying
signal input_jet_type : jet_type := light_jet;

-- prev_jet_type is just a register to keep track of the previous jet which successfuly took off.
signal prev_jet_type : jet_type := light_jet;

-- waited_for is a register that keeps track of how many seconds have elapsed since the last heavy jet
-- got permission to take off
signal waited_for : std_logic_vector(3 downto 0) := x"0";

begin

-- input_jet_type is combinationally produced from this logic. Its value changes everytimr type_number changes
input_jet_type <= heavy_jet when type_number = "001" or 
										 type_number = "011" or
										 type_number = "111" else
					   light_jet;

									  
-- clk_divider to divide the cycle to a smaller frequency		
clk_divider: process (CLK)
variable clk_count : std_logic_vector(25 downto 0) := (others => '0');
begin
	if rising_edge(CLK) then
		clk_count := std_logic_vector(unsigned(clk_count) + 1);
		clk_div <= clk_count(25);
	end if;
end process;

main: process (clk_div)
-- display_count is a register used to keep track of how many cycles have elapsed since the atc was displaying the result
variable display_count : std_logic_vector(1 downto 0) := (others => '0');

-- current_state keeps track of the state of the atc. We only have 2 states right now
variable current_state : atc_state := idle;

-- waited_for_control is register that keeps track of the counter's state;
variable waited_for_control : wait_state := idle;

-- cur_jet_type is a register taht keeps the type of the jet whose request is being processed
variable cur_jet_type : jet_type := light_jet;

-- req_granted simply keeps track of whether the current request was granted 
variable req_granted : std_logic;

begin
	if rising_edge(clk_div) then
	
		-- idle state asserts no output
		-- Only way out of idle state, is if a req is registered
		if current_state = idle then
			GRANTED <= '0';
			DENIED <= '0';
			if req = '1' then
			-- cur_jet_type stores the input_jet_type
			-- Logic later in this process mostly uses cur_state_type, so as to give correct output in case
			-- the value of type_number changes during the time the request is being processed
				cur_jet_type := input_jet_type;
				
			-- The req_granted logic. 	
				if cur_jet_type = heavy_jet or 
               (cur_jet_type = light_jet and prev_jet_type = light_jet) or
				   (cur_jet_type = light_jet and prev_jet_type = heavy_jet and waited_for >= x"A") then
					req_granted := '1';
				else
					req_granted := '0';
				end if;
				
				-- Also we change the state to displaying as the request has been registered
				-- current_state is a variable for this reason btw. So we can immediately change state without
				-- waiting for the next cycle
				current_state := displaying;
				
				
				-- A bit of logic for controlling the waited_for counter. 
				-- We reset the counter if the current jet is a heavy one. Otherwise, if the counter is not idle, continue
				-- counting
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
			-- display_count is incremented to keep track of how long we've been displaying for		
			display_count := std_logic_vector(unsigned(display_count) + 1);
			
			-- output granted and denied 
			GRANTED <= req_granted;
			DENIED <= not req_granted;
			
			-- when 3 cycles have elapsed, go back to idle state
			if display_count = b"11" then
				current_state := idle;
				
			-- display_count is reset before state tranistions
				display_count := b"00";
			
			-- prev_jet_type is assigned the value of cur_jet_type, if the request is granted
				if req_granted = '1' then
					prev_jet_type <= cur_jet_type;
				end if;
			end if;
			
		end if;
		
		-- The Waited_for state machine
		-- count: keep incrementing waited_for until it reached 10. Then move to idle state
		if waited_for_control = count then
			if waited_for < x"a" then
				waited_for <= std_logic_vector(unsigned(waited_for) + 1);
			else
				waited_for_control := idle;
			end if;
		
		-- idle: do nothing
		elsif waited_for_control = idle then
		
		-- reset: reset waited_for to 1, and change state to count
		-- waited_for is initialised to 1 because waited_for being a signal assignment
		-- occurs at the end of the process. By which, the atc has already waited 1 second.
		elsif waited_for_control = reset then
			waited_for <= x"1";
			waited_for_control := count;
		end if;
		
		-- purely for debugging reasons, and to make the life of our GA easier.
		waited_for_debug <= waited_for;
	end if;
end process;

end Behavioral;

