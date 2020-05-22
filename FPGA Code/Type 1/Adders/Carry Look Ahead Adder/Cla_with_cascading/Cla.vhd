---------------------------------------------------------------------------------------------------------
--												   CARRY LOOK AHEAD ADDER                                          --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity cla_adder is
	port(
			A,B  : in std_logic_vector(3 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(3 downto 0);
			Cout : out std_logic
		 );
end cla_adder;

architecture cla of cla_adder is 
	signal prop,gen : std_logic_vector(3 downto 0);
	signal carry    : std_logic_vector(4 downto 0);
	
	component cla_block is 
		port(
				P   : in std_logic_vector(3 downto 0);
				G   : in std_logic_vector(3 downto 0);
				Cin : in std_logic;
				C   : out std_logic_vector(4 downto 0)
		  );
	end component;
	
begin

	prop <= A xor B;
	gen  <= A and B;
	
	logical_block : cla_block port map (prop,gen,Cin,carry);
	
	Sum(3 downto 0) <= prop(3 downto 0) xor carry(3 downto 0);
	Cout   <= carry(4);
	
end cla;
