--------------------------------------------------------------------------------------------------
--                                   LOGIC OF CARRY LOOK AHEAD ADDER                            --
--------------------------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;

entity cla_block is
	port(
				P   : in std_logic_vector(3 downto 0);
				G   : in std_logic_vector(3 downto 0);
				Cin : in std_logic;
				C   : out std_logic_vector(4 downto 0)
		  );
end cla_block;

architecture logic of cla_block is
 
begin 
	C(0) <= Cin;
	C(1) <= G(0) or (P(0) and Cin);
	C(2) <= G(1) or (P(1) and G(0)) or (P(1) and P(0) and Cin);
	C(3) <= G(2) or (P(2) and G(1)) or (P(2) and P(1) and G(0)) or (P(2) and P(1) and P(0) and Cin);
	C(4) <= G(3) or (P(3) and G(2)) or (P(3) and P(2) and G(1)) or (P(3) and P(2) and P(1) and G(0)) or (P(3) and P(2) and P(1) and P(0)and Cin);
end logic;	
