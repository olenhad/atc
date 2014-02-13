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
         DENIED : OUT  std_logic;
			 WAITED_FOR_DEBUG : out STD_LOGIC_VECTOR(3 downto 0);
			 DReqG : out std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal REQ : std_logic := '0';
   signal TYPE_NUMBER : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal GRANTED : std_logic;
   signal DENIED : std_logic;
	signal WAITED_FOR_DEBUG : STD_LOGIC_VECTOR(3 downto 0);
	signal dReqG : std_logic;
   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: atc PORT MAP (
          CLK => CLK,
          REQ => REQ,
          TYPE_NUMBER => TYPE_NUMBER,
          GRANTED => GRANTED,
          DENIED => DENIED,
			 WAITED_FOR_DEBUG => WAITED_FOR_DEBUG,
			 dreqg => dreqg
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
		
		-- heavy 
		-- tests if 3 seconds fulfilled
		TYPE_NUMBER <= b"001";
		req <= '1';
		wait for clk_period;
		assert GRANTED = '1' report "Test Fail" severity error;
		
		req <= '0';
		wait for CLK_period*3;
		assert GRANTED = '0' report "Test Fail" severity error;
		assert waited_for_debug = x"3" report "Wrong wait val" severity error;
		-- waited_for == 3
		
		
		-- light
		-- 
		TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		assert DENIED = '1' report "Test Fail" severity error;
		assert waited_for_debug = x"4" report "Wrong wait val" severity error;
		req <= '0';
		
		wait for CLK_period*3;
		assert GRANTED = '0' and DENIED = '0' report "Test Fail" severity error;
		assert waited_for_debug = x"7" report "Wrong wait val" severity error;
		
		TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		assert DENIED = '1' report "Test Fail" severity error;
		assert waited_for_debug = x"8" report "Wrong wait val" severity error;
		req <= '0';
		wait for CLK_period*3;
		assert GRANTED = '0' and DENIED = '0' report "Test Fail" severity error;
		
		
		TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		assert DENIED = '0' and GRANTED = '1' report "Test Fail" severity error;
		req <= '0';
		wait for CLK_period*3;
		assert GRANTED = '0' and DENIED = '0' report "Test Fail" severity error;
	
		TYPE_NUMBER <= b"111";
		req <= '1';
		wait for clk_period;
		assert DENIED = '0' and GRANTED = '1' report "Test Fail" severity error;
		req <= '0';
		wait for CLK_period*3;
	
	TYPE_NUMBER <= b"001";
		req <= '1';
		wait for clk_period;
		assert DENIED = '0' and GRANTED = '1' report "Test Fail" severity error;
		req <= '0';
		wait for CLK_period*3;
	
			TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		assert DENIED = '1' and GRANTED = '0' report "Test Fail" severity error;
		req <= '0';
		wait for CLK_period*3;
		assert GRANTED = '0' and DENIED = '0' report "Test Fail" severity error;
		
			TYPE_NUMBER <= b"000";
		req <= '1';
		wait for clk_period;
		assert DENIED = '1' and GRANTED = '0' report "Test Fail" severity error;
		req <= '0';
		wait for CLK_period*3;
		assert GRANTED = '0' and DENIED = '0' report "Test Fail" severity error;
		
		
		wait;
   end process;

END;
