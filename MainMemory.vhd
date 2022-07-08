library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library work;
    use work.Types.ALL;

entity MainMemory is
    Port ( read_enable : in  STD_LOGIC;
           write_enable : in  STD_LOGIC;
           ppn_in : in  STD_LOGIC_VECTOR (3 downto 0);
           page_offset : in  STD_LOGIC_VECTOR (6 downto 0);
           data_bus_in : in  PAGE;
           clk : in  STD_LOGIC;
			  ppn_out : out STD_LOGIC_VECTOR (3 downto 0);
           data_bus_out : out  STD_LOGIC_VECTOR (31 downto 0)); -- data going to cache
end MainMemory;

architecture Behavioral of MainMemory is

	SIGNAL data_memory: data12in32in32 := (others => (others => (others => 'U')));
	SIGNAL index : INTEGER RANGE 0 to 11;

begin

	Memory_Process : Process(clk, read_enable, write_enable) is
		
		VARIABLE index_dim_one : INTEGER;
		VARIABLE index_dim_two : INTEGER;
		
	begin
		if (read_enable = '1' AND RISING_EDGE(clk)) then -- if clock is on its rising edge, read will be done
			index_dim_one := to_integer(unsigned(ppn_in));
			index_dim_two := to_integer(unsigned(page_offset(6 downto 2)));
			data_bus_out <= data_memory(index_dim_one)(index_dim_two);
		end if;
		
		if (write_enable = '1' AND FALLING_EDGE(clk)) then -- if clock is on its falling edge write will be done
			for i in 0 to 31 loop
				data_memory(index)(i) <= data_bus_in(i);
			end loop;
			ppn_out <= STD_LOGIC_VECTOR(to_unsigned(index, ppn_out'length));
			index <= index + 1;
		end if;
	end process;

end Behavioral;

