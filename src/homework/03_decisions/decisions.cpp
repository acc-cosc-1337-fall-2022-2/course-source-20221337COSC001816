//write include statement for decisions header
#include "decisions.h"
#include <string>
using namespace std;

//Write code for function(s) code here



//This function uses if statements to test the range in which the users input falls
string get_letter_grade_using_if(int grade)
{
    string theLetterGrade = " ";

    if(grade <= 59 && grade >= 0)
    {
        theLetterGrade = "F";
    }
    else if(grade <= 69 && grade >= 60)
    {
        theLetterGrade = "D";
    }
    else if(grade <= 79 && grade >= 70)
    {
        theLetterGrade = "C";
    }
    else if(grade <= 89 && grade >= 80)
    {
        theLetterGrade = "B";
    }
    else if(grade <= 100 && grade >= 90)
    {
        theLetterGrade = "A";
    }
    else
    {
        theLetterGrade = "The Grade is out of the range of 0-100";
    }



    return theLetterGrade;

}



//This function uses a switch statement to test the range in which the users input falls
string get_letter_grade_using_switch(int grade)
{
    string theLetterGrade = " ";

    switch(grade)
    {
        case 0 ... 9:
            theLetterGrade = "F";
            break;
        case 10 ... 19:
            theLetterGrade = "F";
            break;
        case 20 ... 29:
            theLetterGrade = "F";
            break;
        case 30 ... 39:
            theLetterGrade = "F";
            break;
        case 40 ... 49:
            theLetterGrade = "F";
            break;
        case 51 ... 59:
            theLetterGrade = "F";
            break;
        case 60 ... 69:
            theLetterGrade = "D";
            break;
        case 70 ... 79:
            theLetterGrade = "C";
            break;
        case 80 ... 89:
            theLetterGrade = "B";
            break;
        case 90 ... 100:
            theLetterGrade = "A";
            break;
        default:
            theLetterGrade = "The Grade is out of the range of 0-100";

    }

    return theLetterGrade;

}

