LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY contador_tb IS
END contador_tb;
 
ARCHITECTURE behavior OF contador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT contador_module
    PORT(
         ena : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         push_b : IN  std_logic;
         up_down : IN  std_logic;
         dig : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ena : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal push_b : std_logic := '0';
   signal up_down : std_logic := '0';

 	--Outputs
   signal dig : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: contador_module PORT MAP (
          ena => ena,
          clk => clk,
          rst => rst,
          push_b => push_b,
          up_down => up_down,
          dig => dig,
          anodo => anodo
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
	
 btt :process
   begin
		 push_b <= '1';
		wait for 50	 ns;
		 push_b <= '0';
		wait for 50 ns;	
   end process;

   stim_proc: process
   begin
		rst <= '0';
		ena <= '1' after 50 ns;
		up_down <= '1' after 500 ns;
      wait for 50 ns;
		rst <= '1';
      wait for 100 ns;
		rst <= '0';
      wait for 300 ns;
		rst <= '0';
      wait for 400 ns;
		rst <= '0';
      wait for 400 ns;
      wait;
   end process;

END;