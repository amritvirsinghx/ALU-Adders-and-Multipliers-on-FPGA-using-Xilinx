---------------------------------------------------------------------------------------------------------
--						           CARRY SELECT ADDER COMPONENT : FULL ADDER                                 --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity full_adder is
	port(
			x,y,cin    : in std_logic;
			sum,p,cout : out std_logic
		 );
end full_adder;

architecture add of full_adder is
begin

	p    <= x xor y;
	sum  <= x xor y xor cin;
	cout <= (x and y) or (cin and (x xor y));
	
end add;
