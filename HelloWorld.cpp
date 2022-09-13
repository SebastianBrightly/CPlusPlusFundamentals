#include "HelloWorld.h"
using namespace std;

void HelloWorld()
	{
	int PersonOpinion = 0;
	string Mystring = "This message was built from a string variable";
	cout << "Hello World!" << endl;
	cout << Mystring << endl;

	cout << "Now we are going to test out some input" << endl;
	cout << "On a scale of 1 to 10 how would you rate my program so far?" << endl;
	
	
	cin >> PersonOpinion;

	//error handle if the user tries to input anything that is not an interger, or number
	if (cin.fail()) 
	{
		do
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Sorry but the value should be between 1 to 10, otherwise we can't continue" << endl;
			cout << "So what is your rating?" << endl;
			cin >> PersonOpinion;

			while (PersonOpinion <= 0 || PersonOpinion >= 11)
			{
				if (PersonOpinion <= 0)
				{
					cout << "That was uncalled for, at least give me a 1" << endl;
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "What is your rating? I'll forgive you if you give me a 10, but I can't tell you what to do " << endl;
					cin >> PersonOpinion;
				}

				if (PersonOpinion >= 11)
				{
					cout << "I'm flattered, but lets just call it a 10 and move on" << endl;
					PersonOpinion = 10;
				}

			}
		} while (cin.fail());
	}
	else 
	{
		while (PersonOpinion <= 0 || PersonOpinion >= 11)
		{
			if (PersonOpinion <= 0)
			{
				cout << "That was uncalled for, at least give me a 1" << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "We'll just make this as a 5, and not asking about matters of taste" << endl;
				PersonOpinion = 5;
			}

			if (PersonOpinion >= 11)
			{
				cout << "I'm flattered, but lets just call it a 10 and move on" << endl;
				PersonOpinion = 10;
			}

		}
	}


	}

void Welcome() {}

void HelloMenu()
{
	//This will be the menu that will display the different interactions mainly focused on cin and cout
	bool EndHelloMenu = false;

	do
	{
		int HelloMenuSelection = 0;

		switch (HelloMenuSelection)
		{
		case 1:

			break;
			
		case 2:
			

			break;
			
		case 3:
			break;
			
		case 4:
			break;
			

		default:

			break;
		}

	} while (!EndHelloMenu);

}
