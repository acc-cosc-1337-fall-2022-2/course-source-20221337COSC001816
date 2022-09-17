//write include statements
#include <iostream>
#include "hwexpressions.h"


//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	//This creates the double variables
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;



	//This allows the user to enter the meal amount number, it is stored in the variable meal_amount and passed into get_sales_tax_amount
	cout << "Enter the meal amount number: ";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);



	//This allows the user to enter the tip rate, it is stored in tip_rate and passed into get_tip_amount
	cout << "Enter the tip rate percent in decimal form: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);




	//This calculates the sum of all costs and sets it into the total variable
	total = meal_amount + tax_amount + tip_amount;


	//This will output the receipt
	cout << "Meal Amount:\t " << meal_amount << endl;
    cout << "Sales Tax:\t " << tax_amount << endl;
    cout << "Tip Amount:\t " << tip_amount << endl;
    cout << "Total:\t\t " << total;


	return 0;
}
