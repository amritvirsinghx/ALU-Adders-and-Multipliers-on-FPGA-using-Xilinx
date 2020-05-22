----------------------------------------------------------------------------------------------------
--														CARRY SAVE ADDER													  --
----------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity carry_save_adder is
	port(
			x,y,z : in std_logic_vector(3 downto 0);
			Sum   : out std_logic_vector(4 downto 0);
			Cout  : out std_logic
		 ); 
end carry_save_adder;

architecture csa of carry_save_adder is

	component full_adder is 
		port(
				x,y,cin  : in std_logic;
				sum,cout : out std_logic
			 );
	end component;

	signal s1,c1,c2 : std_logic_vector(3 downto 0);
		
begin

	c2(0) <='0';
--- carry adder block

	fa001 : full_adder port map(X(0),Y(0),Z(0),s1(0),c1(0));
	fa002 : full_adder port map(X(1),Y(1),Z(1),s1(1),c1(1));
	fa003 : full_adder port map(X(2),Y(2),Z(2),s1(2),c1(2));
	fa004 : full_adder port map(X(3),Y(3),Z(3),s1(3),c1(3));
	
---ripple adder block

	fa005 : full_adder port map(s1(1),c1(0),c2(0),Sum(1),c2(1));
	fa006 : full_adder port map(s1(2),c1(1),c2(1),Sum(2),c2(2));
	fa007 : full_adder port map(s1(3),c1(2),c2(2),Sum(3),c2(3));
	fa008 : full_adder port map('0'  ,c1(3),c2(3),Sum(4),Cout);
	
	Sum(0) <= s1(0);
	
end csa;
	
