---------------------------------------------------------------------------------------------------------
--						                          CARRY SKIP ADDER                                           --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity carry_skip_adder is
	port(
			X,Y  : in std_logic_vector(1 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(1 downto 0);
			Cout : inout std_logic
		 );
end carry_skip_adder;

architecture cska of carry_skip_adder is
	
	component multiplexer is
	port (
			i0,i1,sel : in std_logic;
		   bitout 	 : out std_logic
		  );
	end component;
	
	component full_adder is
    port (
			  x,y,cin    : in std_logic;
           sum,p,cout : out std_logic
         );
   end component;
	
	signal p : std_logic_vector(1 downto 0);
	signal c : std_logic_vector(2 downto 0);
	signal a : std_logic;
	
begin
	
	fa001 : full_adder port map (X(0) ,Y(0) ,Cin ,Sum(0),p(0),c(0));
	fa002 : full_adder port map (X(1) ,Y(1) ,c(0),Sum(1),p(1),c(1));
	
	a <= p(0) and p(1);
		
	muux001 : multiplexer port map (c(1) ,Cin  ,a ,c(2));
	
	Cout <= c(2);
	
end cska;

	