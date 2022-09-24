//write include statement for decisions header
#include "decisions.h"
#include <string>

//Write code for function(s) code here




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
    else if(grade <= 69 && grade >= 60)
    {
        theLetterGrade = "C";
    }
    else if(grade <= 69 && grade >= 60)
    {
        theLetterGrade = "B";
    }
    else if(grade <= 69 && grade >= 60)
    {
        theLetterGrade = "A";
    }
    else
    {
        theLetterGrade = "The Grade is out of the range of 0-100";
    }





    return theLetterGrade;

}


string get_letter_grade_using_switch(int grade)
{
    string theLetterGrade = " ";



    return 0;


}







