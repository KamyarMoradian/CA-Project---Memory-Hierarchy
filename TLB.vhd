library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library work;
    use work.Types.ALL;

entity TLB is
    Port ( read_enable : in  STD_LOGIC;
           write_enable : in  STD_LOGIC;
           vpn : in  STD_LOGIC_VECTOR (8 downto 0);
           data_bus_in : in  STD_LOGIC_VECTOR (3 downto 0); -- input ppn
           clk : in  STD_LOGIC;
           data_bus_out : out  STD_LOGIC_VECTOR (3 downto 0); -- output ppn
           hit : out  STD_LOGIC);
end TLB;

architecture FullAssociative of TLB is

	SIGNAL TLB_memory: data48in14 := (others => (others => '0'));

begin

	FullAssociativeProcess : Process(clk, read_enable, write_enable) is
		
		VARIABLE data_row : STD_LOGIC_VECTOR(13 downto 0);
		ALIAS valid : STD_LOGIC is data_row(13);
		ALIAS tag : STD_LOGIC_VECTOR(8 downto 0) is data_row(12 downto 4);
		ALIAS ppn : STD_LOGIC_VECTOR(3 downto 0) is data_row(3 downto 0);
		
		VARIABLE flag : STD_LOGIC := '0';
		
		VARIABLE seed1 : POSITIVE;
		VARIABLE seed2 : POSITIVE;
		VARIABLE x : REAL;
		VARIABLE random_index : INTEGER;
		
	begin
		if (read_enable = '1' AND RISING_EDGE(clk)) then
			flag := '0';
			for i in 0 to 47 loop
				data_row := TLB_Memory(i);
				if (valid = '1' AND tag = vpn) then
					data_bus_out <= ppn;
					hit <= '1';
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				hit <= '0';
			end if;
		end if;
		
		if (write_enable = '1' AND FALLING_EDGE(clk)) then
			flag := '0';
			
			for i in 0 to 47 loop
				data_row := TLB_Memory(i);
				if (valid = '0') then
					TLB_Memory(i)(12 downto 4) <= vpn;
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				-- generating random index
				seed1 := 1;
				seed2 := 1;
				uniform(seed1, seed2, x);
				random_index := integer(floor(x * 48.0));
			
				TLB_Memory(random_index)(12 downto 4) <= vpn; -- changing tag
				TLB_Memory(random_index)(13) <= '1'; -- setting valid bit 1
			end if;
		end if;
		
	end Process;

end FullAssociative;

architecture FourWaySetAssociative of TLB is

	SIGNAL TLB_memory: four_data12in4 := (others => (others => '0'));

begin

	FourWaySetAssociativeProcess : Process(clk, read_enable, write_enable) is
		
		-- vpn_var: holds input vpn
		VARIABLE vpn_var : STD_LOGIC_VECTOR(8 downto 0);
		ALIAS input_tag : STD_LOGIC_VECTOR(6 downto 0) is vpn_var(8 downto 2);
		ALIAS input_index : STD_LOGIC_VECTOR(1 downto 0) is vpn_var(1 downto 0);
		
		VARIABLE data_row : STD_LOGIC_VECTOR(13 downto 0);
		ALIAS valid : STD_LOGIC is data_row(13);
		ALIAS row_tag : STD_LOGIC_VECTOR(6 downto 0) is data_row(12 downto 6);
		ALIAS row_index : STD_LOGIC_VECTOR(1 downto 0) is data_row(5 downto 4);
		ALIAS ppn : STD_LOGIC_VECTOR(3 downto 0) is data_row(3 downto 0);
		
		VARIABLE flag : STD_LOGIC := '0';
		
		VARIABLE seed1 : POSITIVE;
		VARIABLE seed2 : POSITIVE;
		VARIABLE x : REAL;
		VARIABLE random_index : INTEGER;
		
	begin
	
		if (read_enable = '1' AND RISING_EDGE(clk)) then
			flag := '0';
			vpn_var := vpn;
			
			for i in 0 to 11 loop
				data_row := TLB_Memory(input_index)(i);
				if (valid = '1' AND input_tag = row_tag) then
					data_bus_out <= ppn;
					hit <= '1';
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				hit <= '0';
			end if;
		end if;
		
		if (write_enable = '1' AND FALLING_EDGE(clk)) then
			flag := '0';
			vpn_var := vpn;
			
			for i in 0 to 11 loop
				data_row := TLB_Memory(input_index)(i);
				if (valid = '0') then
					TLB_Memory(input_index)(i)(12 downto 4) <= vpn;
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				-- generating random index, in case all indeces are full
				seed1 := 1;
				seed2 := 1;
				uniform(seed1, seed2, x);
				random_index := integer(floor(x * 12.0));
				
				TLB_Memory(input_index)(random_index)(12 downto 4) <= vpn; -- changing tag
				TLB_Memory(input_index)(random_index)(13) <= '1'; -- setting valid bit 1
			end if;
		end if;
		
	end Process;

end FourWaySetAssociative;