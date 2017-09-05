/*This is the DND Dicer Roller application. This program was made
to help me learn more about C++ */
#pragma once
#include "DNDDiceRoll.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

// calls all functions in the program
int main();
int GetRoll();
void PrintStart();
void PrintIntro();
int CreateChar();
bool AskToRollAgain();

DnDDiceRoller DDR;
// initiates the program to run the classes
int main()
{			
	
	int UserSelction;
	bool RollAgain = false;
	PrintIntro();
		
	cin >> UserSelction;

	if (UserSelction == 1)
	{
		CreateChar();
	}
	else if (UserSelction == 2)
	{
		cout << "Function not implemented yet";
		main();
	}
	else if (UserSelction == 3)
	{
		do
		{
			PrintStart();
			GetRoll();
			RollAgain = AskToRollAgain();
		} while (RollAgain);
	}
	
	return 0;
}

// prints out the start of the game to the user
void PrintIntro()
{
	cout << "this is a dnd dice roller application" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1. Create Character\n";	
	cout << "2. Edit Existing Character\n";
	cout << "3. Roll Dice with Character\n";
}

int CreateChar()
{
	Public:
	string CharName;
	ofstream DnDCharFile;
	int CharConst = 0;
	int CharConstMod = 0;
	int CharWisd = 0;
	int CharWisdMod = 0;
	int CharCharis = 0;
	int CharCharisMod = 0;
	int CharIntel = 0;
	int CharIntelMod = 0;
	int CharStren = 0;
	int CharStrenMod = 0;
	int CharDex = 0;
	int CharDexMod = 0;
	

	cout << "Please Enter Character Name: ";
	cin >> CharName;
	cout << "Please Enter Constitution: ";
	cin >> CharConst;
	cout << "Please Enter Constitution Modifier: ";
	cin >> CharConstMod;
	cout << "Please Enter Wisdom: ";
	cin >> CharWisd;
	cout << "please Enter Wisdom Modifier: ";
	cin >> CharCharisMod;
	cout << "Please Enter Charisma: ";
	cin >> CharCharis;
	cout << "please Enter Charisma Modifier: ";
	cin >> CharCharisMod;
	cout << "Please Enter Intelligence: ";
	cin >> CharIntel;
	cout << "Please Enter Intelligence Modifier: ";
	cin >> CharIntelMod;
	cout << "Please Enter Strength: ";
	cin >> CharStren;
	cout << "Please Enter Strength Modifier: ";
	cin >> CharStrenMod;
	cout << "Please Enter Dexterity: ";
	cin >> CharDex;
	cout << "Please Enter Dexterity Modifier: ";
	cin >> CharDexMod;

	cout << "#########" << CharName <<"################" << endl;
	
	cout << "Constitution:" << CharConst << "(" << CharConstMod << ") " << endl;
	
	cout << "Wisdom:" << CharWisd << "(+" << CharWisdMod << ")      " << endl;

	cout << "Charisma:" << CharCharis << "(" << CharCharisMod << ")     " << endl;

	cout << "Intelligence:" << CharIntel << "(" << CharIntelMod << ") " << endl;

	cout << "Strength:" << CharStren << "(" << CharStrenMod << ")     " << endl;

	cout << "Dexterity:" << CharDex << "(" << CharDexMod << ")     " << endl;

	cout << "#########" << CharName << "################\n" << endl;

	system("PAUSE");
	return main();
}


void PrintStart()
{	
	cout << "please select the dice you would like to roll" << endl;	
	cout << "1. D6 2. D8 3. D10 4. D12 5. D20 6. Quit" << endl;
	return;
}
 
int GetRoll()
{
	int DiceRoll;	
	string line;
	cin.clear();
	

while (getline(cin, line))
	{
		stringstream linestream(line);
		cin >> DiceRoll;		
	
		if ((DiceRoll < 1) || (DiceRoll > 6))
		{
			cout << "Please enter a valid input \n";
			cin.clear();
			continue;			
		}			
			cout << DDR.CurrentRoll(DiceRoll) << endl;
			break;		
	}
	
	
	
	
	 // ends the loop based on the user selection

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