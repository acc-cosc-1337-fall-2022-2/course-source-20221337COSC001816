//add include statements
#include "dna.h"
#include <string>
using namespace std;


//add function(s) code here


int factorial(int num)
{
    int sum = 1;

    for(int i = 1; i <= num; i++)
    {
        
        sum = sum * i;

    }



    return sum;
}



int gcd(int param1, int param2)
{
    while(param2 != 0)
    {
        if ( param1 > param2 ) 
        {
            int remainder = param1 % param2;
            param1 = param2;
            param2 = remainder;
        }

    }



    return 0;
}
