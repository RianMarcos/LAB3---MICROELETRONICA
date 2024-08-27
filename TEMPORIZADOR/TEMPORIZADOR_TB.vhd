
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TEMPORIZADOR_TB IS
END TEMPORIZADOR_TB;
 
ARCHITECTURE behavior OF TEMPORIZADOR_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TEMPORIZADOR
    PORT(
         ena : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         anodo : OUT  std_logic_vector(3 downto 0);
         DISP : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ena : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal anodo : std_logic_vector(3 downto 0);
   signal DISP : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TEMPORIZADOR PORT MAP (
          ena => ena,
          clk => clk,
          rst => rst,
          anodo => anodo,
          DISP => DISP
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
    stim_proc: process
   begin		
      rst <= '1';
		ena <= '0';
      wait for 200 ns;
		rst <= '0';
		ena <= '1';	
      wait for clk_period*100;

      wait;
   end process;

END;
