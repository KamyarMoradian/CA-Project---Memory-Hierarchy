library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

package Types is
	TYPE data32in4 is ARRAY (0 to 31) of STD_LOGIC_VECTOR(3 downto 0);
	
	TYPE data32in64 is ARRAY (0 downto 31) of STD_LOGIC_VECTOR(63 downto 0);
	
	TYPE data32in6 is ARRAY (0 to 31) of STD_LOGIC_VECTOR(5 downto 0);
	
	TYPE data32in32 is ARRAY (0 downto 31) of STD_LOGIC_VECTOR(31 downto 0);
	
	TYPE data48in14 is ARRAY (0 to 47) of STD_LOGIC_VECTOR(13 downto 0);
	
	TYPE data12in14 is ARRAY (0 to 11) of STD_LOGIC_VECTOR(13 downto 0);
	TYPE four_data12in4 is ARRAY (3 downto 0) of data12in14;

	TYPE data512in5 is ARRAY (0 to 511) of STD_LOGIC_VECTOR(4 downto 0);

end Types;