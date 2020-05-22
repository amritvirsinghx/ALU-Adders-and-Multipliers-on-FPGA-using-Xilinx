---------------------------------------------------------------------------------------------------------
--						                        CARRY SELECT ADDER                                           --
---------------------------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

entity carry_select_adder is
	port(
			X,Y  : in std_logic_vector(15 downto 0);
			Cin  : in std_logic;
			Sum  : out std_logic_vector(15 downto 0);
			Cout : inout std_logic
		 );
end carry_select_adder;

architecture csla of carry_select_adder is

	component full_adder is
    port (
			  x,y,cin  : in std_logic;
           sum,cout : out std_logic
         );
   end component;

	component multiplexer is
	port (
			i0,i1,sel : in std_logic;
		   bitout 	 : out std_logic
		  );
	end component;

signal temp0,temp1,carry0,carry1,sum0 : std_logic_vector(15 downto 0);

begin
--for carry 0

	fa000 : full_adder port map(X(0) ,Y(0) ,'0'       ,temp0(0) ,carry0(0));
	fa001 : full_adder port map(X(1) ,Y(1) ,carry0(0) ,temp0(1) ,carry0(1));
	fa002 : full_adder port map(X(2) ,Y(2) ,carry0(1) ,temp0(2) ,carry0(2));
	fa003 : full_adder port map(X(3) ,Y(3) ,carry0(2) ,temp0(3) ,carry0(3));
	fa004 : full_adder port map(X(4) ,Y(4) ,carry0(3) ,temp0(4) ,carry0(4));
	fa005 : full_adder port map(X(5) ,Y(5) ,carry0(4) ,temp0(5) ,carry0(5));
	fa006 : full_adder port map(X(6) ,Y(6) ,carry0(5) ,temp0(6) ,carry0(6));
	fa007 : full_adder port map(X(7) ,Y(7) ,carry0(6) ,temp0(7) ,carry0(7));
	fa008 : full_adder port map(X(8) ,Y(8) ,carry0(7) ,temp0(8) ,carry0(8));
	fa009 : full_adder port map(X(9) ,Y(9) ,carry0(8) ,temp0(9) ,carry0(9));
	fa010 : full_adder port map(X(10),Y(10),carry0(9) ,temp0(10),carry0(10));
	fa011 : full_adder port map(X(11),Y(11),carry0(10),temp0(11),carry0(11));
	fa012 : full_adder port map(X(12),Y(12),carry0(11),temp0(12),carry0(12));
	fa013 : full_adder port map(X(13),Y(13),carry0(12),temp0(13),carry0(13));
	fa014 : full_adder port map(X(14),Y(14),carry0(13),temp0(14),carry0(14));
	fa015 : full_adder port map(X(15),Y(15),carry0(14),temp0(15),carry0(15));
	
--for carry 1

	fa100 : full_adder port map(X(0) ,Y(0) ,'1'       ,temp1(0) ,carry1(0));
	fa101 : full_adder port map(X(1) ,Y(1) ,carry1(0) ,temp1(1) ,carry1(1));
	fa102 : full_adder port map(X(2) ,Y(2) ,carry1(1) ,temp1(2) ,carry1(2));
	fa103 : full_adder port map(X(3) ,Y(3) ,carry1(2) ,temp1(3) ,carry1(3));
	fa104 : full_adder port map(X(4) ,Y(4) ,carry1(3) ,temp1(4) ,carry1(4));
	fa105 : full_adder port map(X(5) ,Y(5) ,carry1(4) ,temp1(5) ,carry1(5));
	fa106 : full_adder port map(X(6) ,Y(6) ,carry1(5) ,temp1(6) ,carry1(6));
	fa107 : full_adder port map(X(7) ,Y(7) ,carry1(6) ,temp1(7) ,carry1(7));
	fa108 : full_adder port map(X(8) ,Y(8) ,carry1(7) ,temp1(8) ,carry1(8));
	fa109 : full_adder port map(X(9) ,Y(9) ,carry1(8) ,temp1(9) ,carry1(9));
	fa110 : full_adder port map(X(10),Y(10),carry1(9) ,temp1(10),carry1(10));
	fa111 : full_adder port map(X(11),Y(11),carry1(10),temp1(11),carry1(11));
	fa112 : full_adder port map(X(12),Y(12),carry1(11),temp1(12),carry1(12));
	fa113 : full_adder port map(X(13),Y(13),carry1(12),temp1(13),carry1(13));
	fa114 : full_adder port map(X(14),Y(14),carry1(13),temp1(14),carry1(14));
	fa115 : full_adder port map(X(15),Y(15),carry1(14),temp1(15),carry1(15));

--mux for carry
	mux_carry : multiplexer port map(carry0(15),carry1(15),Cin,Cout);
	
--mux's for sum
	mux_sum0  : multiplexer port map(temp0(0) ,temp1(0) ,Cin,sum0(0));
	mux_sum1  : multiplexer port map(temp0(1) ,temp1(1) ,Cin,sum0(1));
	mux_sum2  : multiplexer port map(temp0(2) ,temp1(2) ,Cin,sum0(2));
	mux_sum3  : multiplexer port map(temp0(3) ,temp1(3) ,Cin,sum0(3));
	mux_sum4  : multiplexer port map(temp0(4) ,temp1(4) ,Cin,sum0(4));
	mux_sum5  : multiplexer port map(temp0(5) ,temp1(5) ,Cin,sum0(5));
	mux_sum6  : multiplexer port map(temp0(6) ,temp1(6) ,Cin,sum0(6));
	mux_sum7  : multiplexer port map(temp0(7) ,temp1(7) ,Cin,sum0(7));
	mux_sum8  : multiplexer port map(temp0(8) ,temp1(8) ,Cin,sum0(8));
	mux_sum9  : multiplexer port map(temp0(9) ,temp1(9) ,Cin,sum0(9));
	mux_sum10 : multiplexer port map(temp0(10),temp1(10),Cin,sum0(10));
	mux_sum11 : multiplexer port map(temp0(11),temp1(11),Cin,sum0(11));
	mux_sum12 : multiplexer port map(temp0(12),temp1(12),Cin,sum0(12));
	mux_sum13 : multiplexer port map(temp0(13),temp1(13),Cin,sum0(13));
	mux_sum14 : multiplexer port map(temp0(14),temp1(14),Cin,sum0(14));
	mux_sum15 : multiplexer port map(temp0(15),temp1(15),Cin,sum0(15));
	
	Sum <= sum0;
					  
end csla;
			