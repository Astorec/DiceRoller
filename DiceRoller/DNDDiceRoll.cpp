#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "DNDDiceRoll.h"

int DnDDiceRoller::CurrentRoll(int DiceRoll) const
{
	Roll DDR;
	
	int RollOut = 0;
	
	switch (RollOut)
	{
	case 1:
		std::srand(time(NULL)); // get a random number
		DiceRoll = rand()  % 6; // between 1 and 6
		break;
	}

	return DiceRoll;
}

void DnDDiceRoller::reset(int RollOut)
{
	const int DiceRoll = CurrentRoll(RollOut);
	MyRoll = DiceRoll;

}
