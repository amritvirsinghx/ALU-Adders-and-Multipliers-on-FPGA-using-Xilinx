---------------------------------------------------------------------------------------------------------
--						                   CARRY SKIP ADDER TOP MODULE                                       --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity u_mod is
	port(
			X,Y  : in std_logic_vector(15 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(15 downto 0);
			Cout : inout std_logic
		 );
end u_mod;

architecture ultra of u_mod is
	
	component top_mod is
		port(
			X,Y  : in std_logic_vector(7 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(7 downto 0);
			Cout : inout std_logic
		 );
		end component;
		
	signal carry : std_logic_vector(1 downto 0);
	
begin
		
	top01 : top_mod port map (X(7 downto 0) ,Y(7 downto 0) ,Cin     ,Sum(7 downto 0)	,carry(0));
	top02 : top_mod port map (X(15 downto 8),Y(15 downto 8),carry(0),Sum(15 downto 8),carry(1));
	
	Cout <= carry(1);
	
end ultra;
	
	
	
	