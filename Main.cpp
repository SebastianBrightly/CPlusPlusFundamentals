#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;


void main(void) {

//This was the begining where everyone says hello
	cout << "Hello World" << endl;


	//This will be the the do while loop that will run through the different exercises I learned
	bool EndOfMyProgram = false;
	int countloop = 0;
	do
	{
		countloop++;
		cout << "Testing the loop" << endl;
		
		if (countloop >= 4)
		{
EndOfMyProgram = true;
		}
		
	} while (!EndOfMyProgram);

}
