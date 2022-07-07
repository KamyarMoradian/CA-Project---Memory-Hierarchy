library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library work;
use work.Types.ALL;

entity PageTable is
    Port ( read_enable : in  STD_LOGIC;
           write_enable : in  STD_LOGIC;
           vpn : in  STD_LOGIC_VECTOR (8 downto 0);
           data_bus_in : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           data_bus_out : out  STD_LOGIC_VECTOR (3 downto 0);
           hit : out  STD_LOGIC);
end PageTable;

architecture Behavioral of PageTable is

	SIGNAL PT_Memory: data512in5 := (others => (others => '0'));
	SIGNAL init : STD_LOGIC := '1';
	
begin

	PT_Memory_process : Process(clk, vpn, data_bus_in, read_enable, write_enable) is
	
		VARIABLE data_row : STD_LOGIC_VECTOR(4 downto 0);
		ALIAS valid : STD_LOGIC is data_row(4);
		ALIAS ppn : STD_LOGIC_VECTOR(3 downto 0) is data_row(3 downto 0);
		
		VARIABLE index : INTEGER;
		
		VARIABLE flag : STD_LOGIC := '0';
		
		VARIABLE seed1 : POSITIVE;
		VARIABLE seed2 : POSITIVE;
		VARIABLE x : REAL;
		VARIABLE random_index : INTEGER;
	
	begin
		
		if (read_enable = '1' AND RISING_EDGE(clk)) then
			if (init = '1') then
				PT_Memory(0) <= "10000";
				init <= '1';
			end if;
			
			index := to_integer(unsigned(vpn));
			data_row := PT_Memory(index);
			if (valid = '1') then
				data_bus_out <= ppn;
				hit <= '1';
			else
				hit <= '0';
			end if;
			
		end if;
		
		if (write_enable = '1' AND FALLING_EDGE(clk)) then
			index := to_integer(unsigned(vpn));
			PT_Memory(index) <= '1' & data_bus_in;
		end if;
		
	end Process;

end Behavioral;

