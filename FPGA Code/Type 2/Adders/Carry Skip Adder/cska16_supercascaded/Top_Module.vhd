---------------------------------------------------------------------------------------------------------
--						                   CARRY SKIP ADDER TOP MODULE                                       --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity top_mod is
	port(
			X,Y  : in std_logic_vector(7 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(7 downto 0);
			Cout : inout std_logic
		 );
end top_mod;

architecture cska_logic of top_mod is
	
	component carry_skip_adder is
		port(
			X,Y  : in std_logic_vector(1 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(1 downto 0);
			Cout : inout std_logic
		 );
		end component;
		
	signal c_int : std_logic_vector(3 downto 0);
	
begin
	
	cska01 : carry_skip_adder port map (X(1 downto 0)  ,Y(1 downto 0)	 ,Cin     ,Sum(1 downto 0)	 ,c_int(0));
	cska02 : carry_skip_adder port map (X(3 downto 2)  ,Y(3 downto 2)	 ,c_int(0),Sum(3 downto 2)	 ,c_int(1));
	cska03 : carry_skip_adder port map (X(5 downto 4)  ,Y(5 downto 4)	 ,c_int(1),Sum(5 downto 4)	 ,c_int(2));
	cska04 : carry_skip_adder port map (X(7 downto 6)  ,Y(7 downto 6)	 ,c_int(2),Sum(7 downto 6)	 ,c_int(3));
	
	Cout <= c_int(3);
	
end cska_logic;