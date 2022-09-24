//write include statements
#include<iostream>
#include<string>
using namepsace std;
#include "decisions.h"


int main() 
{

	int userInputNumberOne;
	int userInputNumberTwo;

	string letterGradeOutputOne = "X";
	string letterGradeOutputTwo = "Y";



	cout << "Enter a numerical grade 0-100: ";
	cin >> userInputNumberOne;
	letterGradeOutputOne = get_letter_grade_using_if(userInputNumberOne);
	cout << "Your letter grade is: "<< letterGradeOutputOne << endl;


	cout << "Enter a second numerical grade 0-100: ";
	cin >> userInputNumberTwo;
	letterGradeOutputTwo = get_letter_grade_using_switch(userInputNumberTwo);
	cout << "Your second letter grade is: "<< letterGradeOutputTwo << endl;
	





	return 0;
}