LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
LIBRARY work;
    USE work.Types.ALL;
 
ENTITY Main_TB IS
END Main_TB;
 
ARCHITECTURE behavior OF Main_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Processor
    PORT(
         clk : IN  std_logic;
         tlb_v : IN  std_logic;
         cache_v : IN  std_logic;
         state_out : OUT  state_type;
         data_out : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal tlb_v : std_logic := '0';
   signal cache_v : std_logic := '0';

 	--Outputs
   signal state_out : state_type;
   signal data_out : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10000 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Processor PORT MAP (
          clk => clk,
          tlb_v => tlb_v,
          cache_v => cache_v,
          state_out => state_out,
          data_out => data_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 50 ns;
		clk <= '1';
		wait for 50 ns;
   end process;
 

--   -- Stimulus process
--   stim_proc: process
--   begin		
--      -- hold reset state for 100 ns.
--      wait for 3 ms;
--
--      -- insert stimulus here 
--
--      wait;
--   end process;

END;
