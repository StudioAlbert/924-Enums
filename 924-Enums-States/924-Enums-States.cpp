// 924-Enums-States.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "States.h"

int main()
{

	State current_state = State::kIdle;

	switch (current_state)
	{
	case State::kIdle:
		// Affiche une image inactive
		break;
	case State::kWalking:
		// Affiche une image inactive
		break;
	case State::kRunning:
		// Affiche une image inactive
		break;
	case State::kJumping:
		// Affiche une image inactive
		break;
	default:
		// Affiche une image inactive
		break;
	}


}
