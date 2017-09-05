/*Header file for the DND dice roller. All class files
 are initialsed in here. */

#pragma once
#include<string>

enum class CheckInput
{
	OK,
	Not_Valid_Input
};

class DnDDiceRoller
{
public:

	int CurrentRoll(int DiceRoll) const;
	int MenuSelection(int DiceRoll) const;
	

	void reset(int);

private:

	int MyRoll;

};