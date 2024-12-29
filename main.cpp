//done Between 8/03/24 - 15/03/24

#include "LibSequence.h"

#include <iostream>

using namespace SequenceSpace;
using namespace std;

int main()
{

char choice = ' ';

do
{

    // Displaying menu options
  cout<<"Choose an Option"
      <<"\nOption A: Reverse a string"
      <<"\nOption B: Generate Linear Sequence"
      <<"\nOption C: Generate Geometric Sequence"
      <<"\nOption X: Exit Program"<<endl;

   cin>>choice;

       //Validation of input to main menu
    if (cin.fail())
    {

    cout<<"Invalid Input.Failed to convert string to integer."<<endl;
    }
    if (choice>=0 || choice<0 )
    {

    cout<<"Invalid input.Please choose from what is provided."<<endl;
    }

   system("cls");

   choice = tolower(choice);
   switch(choice){

   case 'a':{

    string word;
    cout<<"what string would you like to reverse ?"<<endl;
    cin>>word;

    system("cls");

    reverseString(word);

    break;
    }

    case 'b':{


    int startValue, endValue,stepValue;

    // Prompt user for sequence parameters
    cout<<"Please provide the starting value.\n";
    cin>>startValue;

    cout<<"Please provide the ending value.\n";
    cin>>endValue;

    cout<<"Please provide the step value.\n";
    cin>>stepValue;

    system("cls");

    //use Linear sequence function to output the sequence
    LinearSequence(startValue,endValue,stepValue);

    break;
    }

    case 'c':{

    int startValue,numTerms;
    double commonRatio;

    // Prompt user for sequence parameters
    cout<<"Please provide the starting value.\n";
    cin>>startValue;

    cout<<"Please provide the common Ratio.\n";
    cin>>commonRatio;

    cout<<"Please provide the number of terms.\n";
    cin>>numTerms;

    system("cls");

    //use geoemetric sequence function to output the sequence
    GeometricSequence(startValue,commonRatio,numTerms);
    }
    }

}while(choice != 'x');
    return 0;

}
