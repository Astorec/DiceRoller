#pragma once


struct Roll
{

	int D6 = 6;
	int D8[8];
	int D10[10];
	int D12[12];
	int D20[20];

};


class DnDDiceRoller
{
public:

	int CurrentRoll(int DiceRoll) const;

	
	void reset(int);

private:

	int MyRoll;

};