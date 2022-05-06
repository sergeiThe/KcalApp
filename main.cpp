#include <iostream>
#include "Food.h"
#include "Foods.h"
#include "LesData3.h"
#include "GlobalFunctions.h"

using namespace std;

// Datastructure
Foods gFoodies;
const GlobalFunctions gFunctions;

int main()
{
	fstream file("foodlist.txt", ios::in);
	gFoodies.readFromFile(file);
	file.close();

	char command;

	do
	{
		gFunctions.writeMenu();
		command = lesChar("Command");

		switch (command)
		{
		case 'N':	gFoodies.addFood();			break;
		case 'D':	gFoodies.deleteFood();		break;
		case 'S':	gFoodies.showAllFoods();	break;
		case 'Q':	cout << "\nQutting...\n";	break;

		default:
			cout << "\n\nTry again\n\n";
			break;
		}

	} while (command != 'Q');



	file.open("foodlist.txt", ios::out );
	gFoodies.writeToFile(file);
	file.close();
	return 0;
}