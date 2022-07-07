library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library work;
    use work.Types.ALL;



entity Memory is
    Port ( read_enable : in  STD_LOGIC;
           write_enable : in  STD_LOGIC;
           ppn : in  STD_LOGIC_VECTOR (3 downto 0);
           page_offset : in  STD_LOGIC_VECTOR (6 downto 0);
           data_bus_in : in  STD_LOGIC_VECTOR (1023 downto 0);
           clk : in  STD_LOGIC;
           data_bus_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Memory;

architecture Behavioral of Memory is

	SIGNAL data_memory: data12in32in32 := (others => (others => (others => '0')));

begin
		Memory_Process : Process(clk, read_enable, write_enable) is
			
			VARIABLE i : INTEGER;
			VARIABLE index : STD_LOGIC_VECTOR(6 downto 0);
			ALIAS j : STD_LOGIC_VECTOR(4 downto 0) is index(6 downto 2);
			
			
		begin
				if (read_enable = '1') then
					if (RISING_EDGE(clk)) then -- if clock is on its rising edge, read will be done
						index := page_offset;
						i := to_integer(unsigned(ppn));
						data_bus_out <= data_memory(i)(to_integer(unsigned(j)));
					end if;
				end if;
				if (write_enable = '1') then
					if (FALLING_EDGE(clk)) then -- if clock is on its falling edge write will be done
						index := page_offset;
						i := to_integer(unsigned(ppn));
						for z in 0 to 31 loop
							data_memory(i)(z) <= data_bus_in(31*(z+1) downto 31*z);
						end loop;
					end if;
				end if;
		end process;

end Behavioral;

