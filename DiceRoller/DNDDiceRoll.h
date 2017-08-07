#pragma once
#include <string>
using namespace std;

/*struct DiceRoll
{
	
};*/

class DNDDiceRoll
{
public:
	DNDDiceRoll();

	int GetCurrentRoll()  const;
	
	
	void Reset(int);

private:
	int CurrentRoll;
	bool RollAgain;
	bool RollAgainDifferent;

	int GetDiceNumber(int CurrentDice) const;
	
};