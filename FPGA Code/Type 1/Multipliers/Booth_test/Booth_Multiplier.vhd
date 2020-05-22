library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity booth_multiplier is
	port(
			X,Y    : in std_logic_vector(3 downto 0);
			Result : out std_logic_vector(7 downto 0)
		 );
end booth_multiplier;

architecture booth_arch of booth_multiplier is
	
	signal a : std_logic_vector(8 downto 0);
	signal s : std_logic_vector(8 downto 0);
	signal p : std_logic_vector(8 downto 0);
	
	signal p1,p1_shift : std_logic_vector(8 downto 0);
	signal p2,p2_shift : std_logic_vector(8 downto 0);
	signal p3,p3_shift : std_logic_vector(8 downto 0);
	signal p4,p4_shift : std_logic_vector(8 downto 0);
	
begin
	
	a(8 downto 5) <= X;
	a(4 downto 0) <= (others =>'0');
	
	s(8 downto 5) <= not X + "0001";
	s(4 downto 0) <= (others =>'0');
	
	p(8 downto 5) <= (others =>'0');
	p(4 downto 1) <= Y;
	p(0) <= '0';
	
process(a,s,p,p1,p2,p3,p4,p1_shift,p2_shift,p3_shift,p4_shift)
begin
	case (p(1 downto 0)) is
		when "00" =>
			p1<=p;
		when "01" =>
			p1<=p+a;
		when "10" =>
			p1<=p+s;
		when others =>
			p1<=p;
	end case;
	
	p1_shift(7 downto 0) <= p1(8 downto 1);
	p1_shift(8) <= p1(8);
	
	case (p1_shift(1 downto 0)) is
		when "00" =>
			p2<=p1_shift;
		when "01" =>
			p2<=p1_shift+a;
		when "10" =>
			p2<=p1_shift+s;
		when others =>
			p2<=p1_shift;
	end case;
	
	p2_shift(7 downto 0) <= p2(8 downto 1);
	p2_shift(8) <= p2(8);
	
	case (p2_shift(1 downto 0)) is
		when "00" =>
			p3<=p2_shift;
		when "01" =>
			p3<=p2_shift+a;
		when "10" =>
			p3<=p2_shift+s;
		when others =>
			p3<=p2_shift;
	end case;
	
	p3_shift(7 downto 0) <= p3(8 downto 1);
	p3_shift(8) <= p3(8);
	
	case (p3_shift(1 downto 0)) is
		when "00" =>
			p4<=p3_shift;
		when "01" =>
			p4<=p3_shift+a;
		when "10" =>
			p4<=p3_shift+s;
		when others =>
			p4<=p3_shift;
	end case;
	
	p4_shift(7 downto 0) <= p4(8 downto 1);
	p4_shift(8) <= p4(8);
	
end process;
	
	Result <= p4_shift(8 downto 1);
	
end booth_arch;
			
