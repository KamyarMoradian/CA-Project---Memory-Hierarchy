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

	FullAssociativeProcess : Process(clk, vpn, data_bus_in, read_enable, write_enable) is
		
		VARIABLE flag : STD_LOGIC := '0';
		VARIABLE random_index : INTEGER;
		
	begin
		if (read_enable = '1' AND RISING_EDGE(clk)) then
			flag := '0';
			for i in 0 to 47 loop
				if (TLB_Memory(i)(13) = '1' AND TLB_Memory(i)(12 downto 4) = vpn) then
					data_bus_out <= TLB_Memory(i)(3 downto 0);
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
				if (TLB_Memory(i)(13) = '0') then
					TLB_Memory(i) <= '1' & vpn & data_bus_in;
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				-- generating random index
				random_index := Integer(TIME'POS(now)) mod  48;
				TLB_Memory(random_index) <= '1' & vpn & data_bus_in; -- changing tag
			end if;
		end if;
		
	end Process;

end FullAssociative;

architecture FourWaySetAssociative of TLB is

	SIGNAL TLB_memory: data12in4in10 := (others => (others => (others => '0')));

begin

	FourWaySetAssociativeProcess : Process(clk, vpn, data_bus_in, read_enable, write_enable) is
		
		-- vpn_var: holds input vpn
		VARIABLE vpn_var : STD_LOGIC_VECTOR(8 downto 0);
		ALIAS input_tag : STD_LOGIC_VECTOR(4 downto 0) is vpn_var(8 downto 4);
		ALIAS input_index : STD_LOGIC_VECTOR(3 downto 0) is vpn_var(3 downto 0);
		
		-- index of TLB
		VARIABLE index : INTEGER;
--		
--		VARIABLE data_row : STD_LOGIC_VECTOR(9 downto 0);
--		ALIAS valid : STD_LOGIC is data_row(9);
--		ALIAS row_tag : STD_LOGIC_VECTOR(4 downto 0) is data_row(8 downto 4);
--		ALIAS ppn : STD_LOGIC_VECTOR(3 downto 0) is data_row(3 downto 0);
--		
		VARIABLE flag : STD_LOGIC := '0';
		
		VARIABLE seed1 : POSITIVE;
		VARIABLE seed2 : POSITIVE;
		VARIABLE x : REAL;
		VARIABLE random_index : INTEGER;
		
	begin
	
		if (read_enable = '1' AND RISING_EDGE(clk)) then
			flag := '0';
			vpn_var := vpn;
			index := to_integer(unsigned(input_index)) mod 12;
			
			for i in 0 to 3 loop
				if (TLB_Memory(index)(i)(9) = '1' AND input_tag = TLB_Memory(index)(i)(8 downto 4)) then
					data_bus_out <= TLB_Memory(index)(i)(3 downto 0);
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
			index := to_integer(unsigned(input_index)) mod 12;
			
			for i in 0 to 3 loop
				if (TLB_Memory(index)(i)(9) = '0') then
					TLB_Memory(index)(i) <= '1' & input_tag & data_bus_in;
					flag := '1';
					exit;
				end if;
			end loop;
			
			if (flag = '0') then
				-- generating random index, in case all indeces are full
				random_index := Integer(TIME'POS(now)) mod 12;
				TLB_Memory(index)(random_index) <= '1' & input_tag & data_bus_in; -- changing tag and valid bit
			end if;
		end if;
	end Process;

end FourWaySetAssociative;