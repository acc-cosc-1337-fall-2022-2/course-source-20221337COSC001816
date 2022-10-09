//add include statements
#include <string>
using namespace std;
#include "func.h"

//add function code here


double get_gc_content(const string& dna)
{


    double dnaTotalLengthNumber = 0;
    double dnaGCLengthNumber = 0;

    double gccontentOfTheUserInput = 0;


    dnaTotalLengthNumber = dna.length();




    for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'g' || dna[i] == 'C' || dna[i] == 'c')
        {
            dnaGCLengthNumber++;

        }


    }

    gccontentOfTheUserInput = dnaGCLengthNumber/dnaTotalLengthNumber;




    return gccontentOfTheUserInput;
}




string get_reverse_string(string dna)
{

    string reversedDNASequence;

    for(int i = dna.length(); i >= 0; i--)
    {
        reversedDNASequence = reversedDNASequence + dna[i];


    }




    return reversedDNASequence;
}






string get_dna_complement(string dna)
{
    string dnaComplement;
    string reversedDNASequenceFromTheFunction = get_reverse_string(dna);



    for(int i = 0; i < reversedDNASequenceFromTheFunction.length(); i++)
    {
        if(reversedDNASequenceFromTheFunction[i] == 'A' || reversedDNASequenceFromTheFunction[i] == 'a')
        {
            dnaComplement = dnaComplement + 'T';

        }
        else if(reversedDNASequenceFromTheFunction[i] == 'T' || reversedDNASequenceFromTheFunction[i] == 't')
        {
            dnaComplement = dnaComplement + 'A';

        }
        else if(reversedDNASequenceFromTheFunction[i] == 'C' || reversedDNASequenceFromTheFunction[i] == 'c')
        {
            dnaComplement = dnaComplement + 'G';

        }
        else if(reversedDNASequenceFromTheFunction[i] == 'G' || reversedDNASequenceFromTheFunction[i] == 'g')
        {
            dnaComplement = dnaComplement + 'C';

        }


    }


    return dnaComplement;
}