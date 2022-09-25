//write include statements
#include<iostream>
#include<string>
#include "decisions.h"


int main() 
{
	//Create two integer varaibles to store the users input
	int userInputNumberOne;
	int userInputNumberTwo;


	//Create two string variables to store the output of the functions
	string letterGradeOutputOne = "X";
	string letterGradeOutputTwo("Y");


	//Pass the user input to the function, and store the return of the function to a variable (if statements).
	cout << "Enter a numerical grade 0-100: ";
	cin >> userInputNumberOne;
	letterGradeOutputOne = get_letter_grade_using_if(userInputNumberOne);
	cout << "Your letter grade is: "<< letterGradeOutputOne << endl;


	//Pass the user input to the function, and store the return of the function to a variable (switch statement).
	cout << "Enter a second numerical grade 0-100: ";
	cin >> userInputNumberTwo; 
	//if(userInputNumberTwo >= 0 && userInputNumberTwo <= 100)			else	Grade not in range
	letterGradeOutputTwo = get_letter_grade_using_switch(userInputNumberTwo);
	cout << "Your second letter grade is: "<< letterGradeOutputTwo << endl;
	





	return 0;
}