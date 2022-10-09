/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include<iostream>
#include<string>
#include "func.h"
using namespace std;




int main() 
{
	string userExitChoice = " ";
	do{
		string userDNAString;
		int userMenuOption;



		double outputFromGGC;
		string outputFromGRS;
		string outputFromGDC;

		
		cout << "Enter your DNA String: " << endl;
		cin >> userDNAString;
		cout << endl;




		cout << "      MENU" << endl;
		cout << "1- Get GC Content" << endl;
		cout << "2- Get DNA Complement" << endl;
		cout << "3- Exit" << endl;
		cout << "Enter your menu option: " << endl;

		cin >> userMenuOption;



		switch(userMenuOption)
		{
			case 1:
				outputFromGGC = get_gc_content(userDNAString);
				cout << outputFromGGC << endl;
				break;
			case 2:
				outputFromGRS = get_dna_complement(userDNAString);
				cout<< outputFromGRS << endl;
				break;
			case 3:
				cout << "Are you sure you want to exit? (y/n):" << endl << endl;
				cin >> userExitChoice;
				break;
			default:
				cout << "Invalid Input!" << endl;
				break;
		}

	}while(userExitChoice != "y");






	return 0;
}