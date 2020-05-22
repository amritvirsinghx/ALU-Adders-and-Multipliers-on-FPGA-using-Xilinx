---------------------------------------------------------------------------------------------------------
--												     RIPPLE CARRY ADDER                                            --
---------------------------------------------------------------------------------------------------------

librarY ieee;
use ieee.std_logic_1164.all;

entitY ripple_carry_adder is
	port(
			X ,Y : in std_logic_vector(15 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(15 downto 0);
			Cout : out std_logic
		  );
end ripple_carry_adder;

architecture rca of ripple_carry_adder is
	signal c : std_logic_vector(15 downto 0);
	
	component full_adder is
		port(
			x,y,cin  : in std_logic;
			sum,cout : out std_logic
		 );
	end component;
	
begin

	fa000 : full_adder port map(X(0) ,Y(0) ,Cin  ,Sum(0) ,c(0));
	fa001 : full_adder port map(X(1) ,Y(1) ,c(0) ,Sum(1) ,c(1));
	fa002 : full_adder port map(X(2) ,Y(2) ,c(1) ,Sum(2) ,c(2));
	fa003 : full_adder port map(X(3) ,Y(3) ,c(2) ,Sum(3) ,c(3));
	fa004 : full_adder port map(X(4) ,Y(4) ,c(3) ,Sum(4) ,c(4));
	fa005 : full_adder port map(X(5) ,Y(5) ,c(4) ,Sum(5) ,c(5));
	fa006 : full_adder port map(X(6) ,Y(6) ,c(5) ,Sum(6) ,c(6));
	fa007 : full_adder port map(X(7) ,Y(7) ,c(6) ,Sum(7) ,c(7));
	fa008 : full_adder port map(X(8) ,Y(8) ,c(7) ,Sum(8) ,c(8));
	fa009 : full_adder port map(X(9) ,Y(9) ,c(8) ,Sum(9) ,c(9));
	fa010 : full_adder port map(X(10),Y(10),c(9) ,Sum(10),c(10));
	fa011 : full_adder port map(X(11),Y(11),c(10),Sum(11),c(11));
	fa012 : full_adder port map(X(12),Y(12),c(11),Sum(12),c(12));
	fa013 : full_adder port map(X(13),Y(13),c(12),Sum(13),c(13));
	fa014 : full_adder port map(X(14),Y(14),c(13),Sum(14),c(14));
	fa015 : full_adder port map(X(15),Y(15),c(14),Sum(15),c(15));
	
	Cout   <= c(15);
	
end rca ;