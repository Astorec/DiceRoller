#pragma once
#include "DNDDiceRoll.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// calls all functions in the program
int main();
int selectDice();
void PrintIntro();
bool AskToRollAgain();

// initiates the program to run the classes
int main()
{
	bool RollAgain = false;
	do
	{
		PrintIntro();
		selectDice();
		RollAgain = AskToRollAgain();
	} while (RollAgain);
	
	return 0;
}

void PrintIntro()
{
	cout << "this is a dnd dice roller application" << endl;
	cout << "please select the dice you would like to roll" << endl;	
	return;
}
 
int selectDice()
{
	int DiceSelection;
	do
	{
		cout << "1. D6 2. D8 3. D10 4. D12 5. D20" << endl;
		cin >> DiceSelection;
		cout << endl;
	}while (DiceSelection != 1 && DiceSelection != 2 && DiceSelection != 3 && DiceSelection != 4 && DiceSelection != 5);

	return DiceSelection;
}

bool AskToRollAgain()
{
	cout << "Would you like to roll again? (y/n)\n";
	string Response = "";
	getline(cin, Response);
	return (Response[0] =='y' || Response[0] == 'Y');
}