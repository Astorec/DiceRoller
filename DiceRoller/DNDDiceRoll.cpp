/* All Class Funtions are setin here from the header file*/

#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "DNDDiceRoll.h"

int DnDDiceRoller::CurrentRoll(int DiceRoll) const
{
	int UserInput;

	switch (UserInput) // Switch the Dice Roll to what is given by the Random Number Generation
	{
	case 1:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand()  % 6 + 1; // between 1 and 6
		break;
	case 2:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand() % 8 + 1; // between 1 and 8
		break;
	case 3:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand() % 10 + 1; // between 1 and 10
		break;
	case 4:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand() % 12 + 1; // between 1 and 12
		break;
	case 5:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand() % 20 + 1; // between 1 and 20
		break;
	case 6:
		exit(0);
		break;		
	default:
		break;
	}	

	return DiceRoll;
}



void DnDDiceRoller::reset(int DiceRoll)
{
	DiceRoll = CurrentRoll(DiceRoll); // Initialize a reset to the dice to default values
}

