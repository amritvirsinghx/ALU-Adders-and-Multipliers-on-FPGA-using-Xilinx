---------------------------------------------------------------------------------------------------------
--											 CARRY LOOK AHEAD ADDER TOP MODULE                                    --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity top_mod is
	port(
			X,Y  : in std_logic_vector(15 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(15 downto 0);
			Cout : out std_logic
		 );
end top_mod;

architecture logic of top_mod is

	signal c_int : std_logic_vector(3 downto 0); 
	
	component cla_adder is
		port(
				 A,B  : in std_logic_vector(3 downto 0);
				 Cin  : in std_logic;
				 Sum  : out std_logic_vector(3 downto 0);
				 Cout : out std_logic
			 );
	end component;
	
begin

	cla01 : cla_adder port map (X(3 downto 0),Y(3 downto 0),Cin,Sum(3 downto 0),c_int(0));
	cla02 : cla_adder port map (X(7 downto 4),Y(7 downto 4),c_int(0),Sum(7 downto 4),c_int(1));
	cla03 : cla_adder port map (X(11 downto 8),Y(11 downto 8),c_int(1),Sum(11 downto 8),c_int(2));
	cla04 : cla_adder port map (X(15 downto 12),Y(15 downto 12),c_int(2),Sum(15 downto 12),c_int(3));
	
	Cout    <= c_int(3);

end logic;
	
	