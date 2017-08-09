#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "DNDDiceRoll.h"

int DnDDiceRoller::CurrentRoll(int RollOut) const
{
	Roll DDR;
	
	int DiceRoll = 0;
	
	switch (RollOut)
	{
	case 1:
		srand((unsigned int)time(NULL)); // get a random number
		DiceRoll = rand() % DDR.D6[6 + 1]; // between 1 and 6
		break;
	}

	return 0;
}

void DnDDiceRoller::reset(int RollOut)
{
	const int DiceRoll = CurrentRoll(RollOut);
	MyRoll = DiceRoll;

}
