--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:48:04 07/09/2022
-- Design Name:   
-- Module Name:   C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/Main_Test.vhd
-- Project Name:  VHDL-Project
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TLB
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
 
ENTITY Main_Test IS
END Main_Test;
 
ARCHITECTURE behavior OF Main_Test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TLB
    PORT(
         read_enable : IN  std_logic;
         write_enable : IN  std_logic;
         vpn : IN  std_logic_vector(8 downto 0);
         data_bus_in : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         data_bus_out : OUT  std_logic_vector(3 downto 0);
         hit : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal read_enable : std_logic := '0';
   signal write_enable : std_logic := '0';
   signal vpn : std_logic_vector(8 downto 0) := (others => '0');
   signal data_bus_in : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal data_bus_out : std_logic_vector(3 downto 0);
   signal hit : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TLB PORT MAP (
          read_enable => read_enable,
          write_enable => write_enable,
          vpn => vpn,
          data_bus_in => data_bus_in,
          clk => clk,
          data_bus_out => data_bus_out,
          hit => hit
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
