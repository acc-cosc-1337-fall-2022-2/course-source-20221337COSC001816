//write include statements
#include<iostream>
#include<string>
#include "dna.h"

//write using statements
using namespace std;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int userMainMenuInput;

	int userFactorialInput;
	int userGCDInputOne;
	int userGCDInputTwo;

	int factorialOutput;
	int gcdOutput;



	auto exitChoice = 'n';
	do{
		

		cout << "MAIN MENU\n-----------\n1-Factorial\n2-Greatest Common Divisor\n3-Exit\n\n";

		cin >> userMainMenuInput;



		switch(userMainMenuInput)
		{
			case 1:
				cout << "Enter an integer for factorial" << endl;
				cin >> userFactorialInput;
				factorialOutput = factorial(userFactorialInput);
				cout << factorialOutput;
				break;
			case 2:
				cout<< "Enter two integers for the greatest common divisor" << endl;
				cin >> userGCDInputOne;
				cin >> userGCDInputTwo;
				gcdOutput = gcd(userGCDInputOne, userGCDInputTwo);
				cout << gcdOutput;
				break;
			case 3:
				cout << "Are you sure you would like to exit? (y/n)" << endl;
				cin >> exitChoice;
				break;
			default:
				cout << "Invalid Menu choice decision\n" << endl;
				break;

		}
	}while(exitChoice != 'y');








	return 0;
}