#include "DNDDiceRoll.h"
#include<ctime>
DNDDiceRoll::DNDDiceRoll() { Reset(1); }

int DNDDiceRoll::GetCurrentRoll() const
{
	return 0;
}

int DNDDiceRoll::GetDiceNumber(int CurrentDice) const
{
	
	int Roll = 0;	

	switch (CurrentDice)
	{
	case 1:
		srand((unsigned int)time(NULL)); // get a random number
		Roll = rand() % 6 + 1; // between 1 and 6
		break;
	case 2:
		srand((unsigned int)time(NULL)); // get a random number
		Roll = rand() % 8 + 1; // between 1 and 6
		break;
	case 3:
		srand((unsigned int)time(NULL)); // get a random number
		Roll = rand() % 10 + 1; // between 1 and 6
		break;
	case 4:
		srand((unsigned int)time(NULL)); // get a random number
		Roll = rand() % 12 + 1; // between 1 and 6
		break;
	case 5:
		srand((unsigned int)time(NULL)); // get a random number
		Roll = rand() % 20 + 1; // between 1 and 6
		break;
	default:
		break;
	}

	return Roll;
}

void DNDDiceRoll::Reset(int CurrentDice)
{
	CurrentRoll = 0;
}


