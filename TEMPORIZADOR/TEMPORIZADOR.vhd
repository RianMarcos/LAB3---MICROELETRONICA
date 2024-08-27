library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

----------------------------------------------------------------------------------------------------

entity TEMPORIZADOR is

generic (freq: integer := 5; periodo: integer := 1); --50MHZ e 0.5s

    Port (ena : in  STD_LOGIC; -- enable
           clk : in  STD_LOGIC; -- clock
           rst : in  STD_LOGIC; -- reset
			  anodo: out STD_LOGIC_VECTOR(3 downto 0); -- anodo
			  DISP : out STD_LOGIC_VECTOR(6 downto 0)); --display
			  
end TEMPORIZADOR;

----------------------------------------------------------------------------------------------------

architecture Behavioral of TEMPORIZADOR is

	signal VETOR : STD_LOGIC_VECTOR (3 downto 0);
	constant maximo: integer := freq*periodo; -- calcula o tempo 

begin

	anodo <= "1110"; --liga apenas o display mais a direita
	
	process (clk, rst)
	
		variable cont: integer range 0 to maximo:= 0; --conta meio segundo
		variable cont9: integer range 0 to 9 := 0; --conta 0 até 9
		
		begin
		if (rst = '1') then --garante que tudo esteja zerado caso rst tenha valor logico 1
			cont9 := 0; --zera auxiliar
			cont := 0; --zera o contador
			
		elsif (clk'event and clk = '1') then --		
			if (ena = '1') then --e se enable for 1 
				cont := cont + 1; --conta quantas bordas de subida teve até o maximo
				if (cont = maximo) then
					cont9 := cont9 +1;
					cont := 0;
				if (cont9 = 10) then --QUANDO CHEGA EM 10 ZERA
					cont9 := 0;  
				end if;
			end if;
		end if;
	end if;
	
		VETOR <= CONV_STD_LOGIC_VECTOR(cont9, 4);
		
		case VETOR is
		when "0000" => DISP <= "0000001";
		when "0001" => DISP <= "1001111";
		when "0010" => DISP <= "0010010";
		when "0011" => DISP <= "0000110";
		when "0100" => DISP <= "1001100";
		when "0101" => DISP <= "0100100";
		when "0110" => DISP <= "0100000";
		when "0111" => DISP <= "0001111";
		when "1000" => DISP <= "0000000";
		when "1001" => DISP <= "0000100";
		when others => DISP <= "1111111";
		end case;
	
	end process;

end Behavioral;