library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

-------------------------------------------------------------------------------

entity contador_module is

	generic (freq: INTEGER := 5; periodo: integer := 1); --50MHz e 10ms
	
    Port ( ena : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           push_b : in  STD_LOGIC;
           up_down : in  STD_LOGIC;
           dig : out  STD_LOGIC_VECTOR (6 downto 0);
			  anodo : out STD_LOGIC_VECTOR (3 downto 0));
			  
end contador_module;

-------------------------------------------------------------------------------

architecture Behavioral of contador_module is

	signal aux_cont: STD_LOGIC_VECTOR (3 downto 0);
	signal deb: STD_LOGIC := '0'; --variavel para dar ok no debouncer

begin

	anodo <= "1110";
	
process(clk, rst)

	variable aux_clk: integer range 0 to (freq * periodo) := 0; --variavel auxiliar de clock
	
begin
	if (rst = '1') then --garante que tudo esteja zerado caso rst tenha valor logico 1
		aux_clk := 0;
	
	elsif (clk'event and clk = '1') then --se houver mudanca no estado do clock e ele for pra 1...
		if (push_b /= deb) then --se o nivel logico do botao for 1...
			aux_clk := aux_clk + 1;
			if (aux_clk = freq * periodo) then
				deb <= push_b;
				aux_clk := 0;
			end if;
		else 
			aux_clk := 0;
		end if;
	end if;
end process;

process(rst, deb, aux_cont)

	variable cont: integer range 0 to 10 := 0; -- variavel do contador

begin
		if (rst = '1') then --garante que tudo esteja zerado caso rst tenha valor logico 1
			cont := 0;
		elsif (deb'event and deb = '1') then
			if(ena = '1') then
		
				if (up_down = '0') then
					if (cont = 0) then
						cont := 9;
					else
					cont := cont - 1;
					end if;
				else
					if(cont = 9) then
						cont := 0;
					else
					cont := cont + 1;
					end if;
				
				end if;
			end if;
	end if;

	aux_cont <= CONV_STD_LOGIC_VECTOR(cont, 4); --aux_cont (vetor) assume valor de cont em 4 bits
	
	case aux_cont is
		when "0000" => dig <= "0000001";
		when "0001" => dig <= "1001111";
		when "0010" => dig <= "0010010";
		when "0011" => dig <= "0000110";
		when "0100" => dig <= "1001100";
		when "0101" => dig <= "0100100";
		when "0110" => dig <= "0100000";
		when "0111" => dig <= "0001111";
		when "1000" => dig <= "0000000";
		when "1001" => dig <= "0000100";
		when others => dig <= "1111111";
	end case;			

end process;

end Behavioral;