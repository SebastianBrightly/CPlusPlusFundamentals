#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "HelloWorld.h"
using namespace std;


void main(void) {

//This was the begining where everyone says hello
	//cout << "Hello World" << endl;


	//This will be the the do while loop that will run through the different exercises I learned
	bool EndOfMyProgram = false;
	int countloop = 0;
	do
	{
		int MainMenuSelection = 0;
		countloop++;
		cout << "Testing the loop" << endl;
		
		//Building the menu that will allow the display of coding examples
		switch (MainMenuSelection)
		{
			// This will be the hello world as a function, separate h file for this singular function
		case 1:
			cout << "In this demonstration we will run through text exchange practises" << endl;
			HelloMenu();
			break;
			// This will be the random guessing game
		case 2:
			cout << "";

			break;
			// This will be the txt file in and out
		case 3:
			break;
			// This will be the finding the prime number
		case 4:
			break;
			// 

		default:
			break;
		}




		if (countloop >= 4)
		{
EndOfMyProgram = true;
		}
		
	} while (!EndOfMyProgram);

}
