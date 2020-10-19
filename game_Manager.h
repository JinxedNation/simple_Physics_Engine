#pragma once

/**
* @class game_Manager
* @brief 
*
* @author  William Halling
* @version 01
* @date 5/10/2020
*
* @bug no known bugs, but there may be some out there...
*/

class game_Manager
{
public:

	void set_Current_Level(static int temp_Player_Current_Level) { player_Current_Level = temp_Player_Current_Level; }
	int get_Player_Current_Level()   const { return player_Current_Level; }


	void  set_game_Timer(float temp_Game_Timer) { game_Timer = temp_Game_Timer; }
	float get_Game_Timer()           const { return  game_Timer; }


	enum game_State { game_Pause, game_Playing, game_Not_Running };

	void set_Game_State(game_State temp_Game_State) { current_Game_State = temp_Game_State; }
	game_State get_Game_State()       const { return current_Game_State; }

	void SetScore(int i) { score = i; }
	int GetScore()                    const { return score; }


private:

	int        player_Current_Level;
	int        score;
	float      game_Timer;
	game_State current_Game_State;
	
};
