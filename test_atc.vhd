--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:18:38 02/11/2014
-- Design Name:   
-- Module Name:   C:/Users/pc richard/Documents/EE4218/l1/lab1b/test_atc.vhd
-- Project Name:  lab1b
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: atc
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
 
ENTITY test_atc IS
END test_atc;
 
ARCHITECTURE behavior OF test_atc IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT atc
    PORT(
         CLK : IN  std_logic;
         REQ : IN  std_logic;
         TYPE_NUMBER : IN  std_logic_vector(2 downto 0);
         GRANTED : OUT  std_logic;
         DENIED : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal REQ : std_logic := '0';
   signal TYPE_NUMBER : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal GRANTED : std_logic;
   signal DENIED : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: atc PORT MAP (
          CLK => CLK,
          REQ => REQ,
          TYPE_NUMBER => TYPE_NUMBER,
          GRANTED => GRANTED,
          DENIED => DENIED
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 
		
		TYPE_NUMBER <= b"001";
		req <= '1';
		wait for CLK_period;
		req <= '0';
		wait for CLK_period*10;
		
		TYPE_NUMBER <= b"001";
		req <= '1';
		wait for clk_period;
		req <= '0';
		wait for clk_period*5;
		
		TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		req <= '0';
		
		wait for clk_period*5;
		
		TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period*2;
		req <= '0';
		
		wait for clk_period*5;
		
		TYPE_NUMBER <= b"010";
		req <= '1';
		wait for clk_period*2;
		req <= '0';
		
		

      wait;
   end process;

END;
