//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;

	cout << "Enter num variable: ";
	cin >> num;

	int result;
	result = multiply_numbers(num);


	cout << "result variable: " << result;




	int num1;
	num1 = 4;

	result = multiply_numbers(num1);
	cout << "result variable 2nd time: " << result;




	return 0;
}
