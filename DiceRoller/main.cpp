/*This is the DND Dicer Roller application. This program was made
to help me learn more about C++ */
#pragma once
#include "DNDDiceRoll.h"
#include <iostream>
#include <string>
using namespace std;

// calls all functions in the program
int main();
int GetRoll();
void PrintIntro();
bool AskToRollAgain();

DnDDiceRoller DDR;
// initiates the program to run the classes
int main()
{			
	bool RollAgain = false;
	do
	{
		PrintIntro();	
		GetRoll();	
		RollAgain = AskToRollAgain();		
	} while (RollAgain);		
	return 0;
}

// prints out the start of the game to the user
void PrintIntro()
{
	cout << "this is a dnd dice roller application" << endl;
	cout << "please select the dice you would like to roll" << endl;	
	cout << "1. D6 2. D8 3. D10 4. D12 5. D20 6. Quit" << endl;
	return;
}
 
int GetRoll()
{
	int DiceRoll;
	int LastRoll;
	bool FirstRoll = true;	
	cin >> DiceRoll;

	do
	{	
		cout << DDR.CurrentRoll(DiceRoll) << endl;			
		}while (DiceRoll != 1 && DiceRoll != 2 && DiceRoll != 3 && DiceRoll != 4 && DiceRoll != 5 && DiceRoll == 6 ); // ends the loop based on the user selection

	return DiceRoll;
}
// Prompts the user is they would like to roll again
bool AskToRollAgain()
 {
	cout << "Would you like to roll again? (y/n)\n";
	string Response = "";
	cin >> Response;
	return (Response[0] == 'y' || Response[0] == 'Y');
}