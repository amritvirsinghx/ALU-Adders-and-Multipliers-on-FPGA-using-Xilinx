---------------------------------------------------------------------------------------------------------
--						             CARRY SKIP ADDER COMPONENT : MULTIPLEXER                                --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity multiplexer is
	port(
			i0,i1,sel : in std_logic;
			bitout    : out std_logic
		 );
end multiplexer;

architecture selection of multiplexer is
begin
	process(i0,i1,sel)
	begin
		case sel is
			when '0' => 
				bitout <=i0;
			when others => 
				bitout <= i1;
		end case;
	end process;
end selection;