---------------------------------------------------------------------------------------------------------
--						           RIPPLE CARRY ADDER COMPONENT : FULL ADDER                                 --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity full_adder is
	port(
			x,y,cin  : in std_logic;
			sum,cout : out std_logic
		 );
end full_adder;

architecture add of full_adder is
begin

	sum  <= x xor y xor cin;
	cout <= (x and y) or (cin and (x xor y));
	
end add;
