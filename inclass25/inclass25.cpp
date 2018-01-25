// inclass25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random generator
	int secertNumber = rand() % 100 + 1; //Random number between 1 and 64
	int tries = 0;
	int guess;
	cout << "\tWelcome to the Guess My Number\n\n";
	do 
	{
		cout << "Enter a guess:";
		cin >> guess;
		++tries;
		
		if (guess > secertNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secertNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in" << tries << "guesses!\n";
		}
	} while (guess != secertNumber);

    return 0;
}

