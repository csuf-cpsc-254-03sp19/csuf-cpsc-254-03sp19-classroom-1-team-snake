/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#include "Player_name.h"
#include "Game.h"
#include "Setting.h"
#include "State_manager.h"
#include "Resource_manager.h"
#include "Play_state.h"
#include "About_state.h"
#include <iostream>
#include <string>
using namespace std;

	 string player1;
	 string player2;
void Player_name::init()
{
	Resource_manager::load_image("title_background");


	if (player1.size() == 0)
	{
	cout << "Player 1 Enter Name:" << endl;
	cin >> player1;
	
	cout << "Player 2 Enter Name:" << endl;
	cin >> player2;
	}



	State_manager::set_state(new Play_state());

}

void Player_name::handle_events(SDL_Event& event)
{
	
}

void Player_name::update()
{
	
}


void Player_name::render()
{
	Resource_manager::get_image("title_background")->render();
}

void Player_name::clean_up()
{
	Resource_manager::unload_image("title_background");

}