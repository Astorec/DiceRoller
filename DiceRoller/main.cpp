#pragma once
#include "DNDDiceRoll.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// calls all functions in the program
int main();
int GetRoll();
void PrintIntro();
void Start();
bool AskToRollAgain();

DnDDiceRoller RollMain;

// initiates the program to run the classes
int main()
{
	bool RollAgain = false;
	do
	{
		PrintIntro();
		Start();
		GetRoll();
		RollAgain = AskToRollAgain();
	} while (RollAgain);
	return 0;
	return 0;
}

// prints out the start of the game to the user
void PrintIntro()
{
	cout << "this is a dnd dice roller application" << endl;
	cout << "please select the dice you would like to roll" << endl;	
	return;
}

void Start()
{
	int RollOut = GetRoll();
	RollMain.reset(RollOut);
	
}
 
int GetRoll()
{
	int DiceSelection = 0;
	int DiceRoll = 0;
	RollMain.CurrentRoll(DiceRoll);

	do
	{
		cout << "1. D6 2. D8 3. D10 4. D12 5. D20" << endl; // prompts the user to select the dice the want to use
		cin >> DiceSelection; // takes in the users selection and stores it whilst outputing the desired roll	
		cout << DiceRoll << endl;
				
	}while (DiceSelection != 1 && DiceSelection != 2 && DiceSelection != 3 && DiceSelection != 4 && DiceSelection != 5);	

	return DiceSelection;
}

// Prompts the user is they would like to roll again
bool AskToRollAgain()
{
	cout << "Would you like to roll again? (y/n)\n";
	string Response = "";
	cin >> Response;
	return (Response[0] =='y' || Response[0] == 'Y');
}