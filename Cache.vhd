library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library work;
    use work.Types.ALL;

entity Cache is
    Port ( read_en : in  STD_LOGIC;
           write_en : in  STD_LOGIC;
           block_address : in  STD_LOGIC_VECTOR (10 downto 0);
           data_bus_in : in  STD_LOGIC_VECTOR (63 downto 0);
           clk : in  STD_LOGIC;
           hit : out  STD_LOGIC;
           data_bus_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Cache;

architecture DirectMapped of Cache is
	
	SIGNAL VT_memory: data32in4 := (others => (others => '0'));
	SIGNAL data_memory: data32in64 := (others => (others => '0'));
	
begin
	
	DirectMappedProcess : Process(clk, block_address, data_bus_in, read_en, write_en) is 
	
		VARIABLE address_var : STD_LOGIC_VECTOR(10 downto 0);
		ALIAS bo : STD_LOGIC_VECTOR(1 downto 0) is address_var(1 downto 0);
		ALIAS wo : STD_LOGIC is address_var(2);
		ALIAS index : STD_LOGIC_VECTOR(4 downto 0) is address_var(7 downto 3);
		ALIAS tag : STD_LOGIC_VECTOR(2 downto 0) is address_var(10 downto 8);
		
		VARIABLE memory_index : INTEGER;
		
		VARIABLE vt : STD_LOGIC_VECTOR(3 downto 0);
		ALIAS valid : STD_LOGIC is vt(3);
		ALIAS tag_in_memory : STD_LOGIC_VECTOR(2 downto 0) is vt(2 downto 0);
		
		VARIABLE data_row : STD_LOGIC_VECTOR(63 downto 0);
		ALIAS word_0 : STD_LOGIC_VECTOR(31 downto 0) is data_row(31 downto 0);
		ALIAS word_1 : STD_LOGIC_VECTOR(31 downto 0) is data_row(63 downto 32);
		
	begin
		address_var := block_address;
		
		if (read_en = '1') then
			if (RISING_EDGE(clk)) then -- if clock is on its rising edge, read will be done
				memory_index := to_integer(unsigned(index));
				vt := VT_memory(memory_index);
				
				-- mis-hit control
				if (valid = '1' AND tag_in_memory = tag) then
					data_row := data_memory(memory_index);
					if (wo = '0') then
						data_bus_out <= word_0;
					else
						data_bus_out <= word_1;
					end if;
					hit <= '1';
				else
					hit <= '0';
				end if;
			end if;
		end if;
		
		if (write_en = '1') then
			if (FALLING_EDGE(clk)) then -- if clock is on its falling edge write will be done
				memory_index := to_integer(unsigned(index));
				VT_memory(memory_index)(3) <= '1'; -- setting valid bit 1
				data_memory(memory_index) <= data_bus_in;
			end if;
      end if;
		
	end Process;
	
end DirectMapped;

architecture TwoWaySetAssociative of Cache is

	SIGNAL VT_memory_0: data32in6;
	SIGNAL VT_memory_1: data32in6;

	SIGNAL data_memory_0: data32in32;
	SIGNAL data_memory_1: data32in32;

begin

	TwoWaySetAssociativeProcess : Process(clk, block_address, data_bus_in, read_en, write_en) is 
	
		VARIABLE address_var : STD_LOGIC_VECTOR(10 downto 0);
		ALIAS bo : STD_LOGIC_VECTOR(1 downto 0) is address_var(1 downto 0);
		ALIAS index : STD_LOGIC_VECTOR(3 downto 0) is address_var(5 downto 2);
		ALIAS tag : STD_LOGIC_VECTOR(4 downto 0) is address_var(10 downto 6);
		
		VARIABLE memory_index : INTEGER;
		
		VARIABLE vt_0 : STD_LOGIC_VECTOR(5 downto 0);
		ALIAS valid_0 : STD_LOGIC is vt_0(5);
		ALIAS tag_in_memory_0 : STD_LOGIC_VECTOR(4 downto 0) is vt_0(4 downto 0);
		
		VARIABLE vt_1 : STD_LOGIC_VECTOR(5 downto 0);
		ALIAS valid_1 : STD_LOGIC is vt_1(5);
		ALIAS tag_in_memory_1 : STD_LOGIC_VECTOR(4 downto 0) is vt_1(4 downto 0);
		
	begin
		
		address_var := block_address;
		
		if (read_en = '1') then
			if (RISING_EDGE(clk)) then -- if clock is on its rising edge, read will be done
				memory_index := to_integer(unsigned(index));
				vt_0 := VT_memory_0(memory_index);
				vt_1 := VT_memory_1(memory_index);
				
				-- mis-hit control
				if (valid_0 = '1' AND tag_in_memory_0 = tag) then
					data_bus_out <= data_memory_0(memory_index);
					hit <= '1';
				elsif (valid_1 = '1' AND tag_in_memory_1 = tag) then
					data_bus_out <= data_memory_1(memory_index);
					hit <= '1';
				else
					hit <= '0';
				end if;
			end if;
		end if;
		
		if (write_en = '1' AND FALLING_EDGE(clk)) then -- if clock is on its falling edge write will be done
		
			memory_index := to_integer(unsigned(index));
			vt_0 := VT_memory_0(memory_index);
			vt_1 := VT_memory_1(memory_index);
			
			if ((valid_0 = '0') OR (valid_0 = '1' AND valid_1 = '1')) then -- choosing empty cell to put data in
				VT_memory_0(memory_index)(5) <= '1';
				VT_memory_0(memory_index)(4 downto 0) <= tag;
				case index(0) is
					when '0' =>
						data_memory_0(memory_index) <= data_bus_in(31 downto 0);
					when '1' =>
						data_memory_0(memory_index) <= data_bus_in(63 downto 32);
					when others => null;
				end case;
			else
				VT_memory_1(memory_index)(5) <= '1';
				VT_memory_1(memory_index)(4 downto 0) <= tag;
				case index(0) is
					when '0' =>
						data_memory_1(memory_index) <= data_bus_in(31 downto 0);
					when '1' =>
						data_memory_1(memory_index) <= data_bus_in(63 downto 32);
					when others => null;
				end case;
			end if;
      end if;
		
	end Process;

end TwoWaySetAssociative;
