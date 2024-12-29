#include "LibSequence.h"

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Function to reverse a string
void SequenceSpace::reverseString(string word){

cout<<"String Revereser has started"<<endl;
cout<< " "<<endl;

string OGword = word;

// Calculate the length of the input string
int length = word.length();

// Swap elements starting from two corners

for(int i = 0;i<length / 2;i++){// Iterate through half the length of the string

// Swap characters to reverse the string
swap(word[i],word[length - i - 1]);

}
//Display the Reversed String
cout << OGword << " -> " << word << endl;

cout<< " "<<endl;

cout << "The string has been reversed successfully."<<endl;

cout<< " "<<endl;
}

void SequenceSpace::GeometricSequence(int startValue,double commonRatio,int numTerms){

int a = startValue;
double r = commonRatio;
int n = numTerms;

//display input from the user
cout<<"Geometric Sequence Generation has Started"<<endl;

cout<< " "<<endl;

cout<<"Start Value : "<<startValue<<"\nCommon Ratio: "<<commonRatio<<"\nNum of Terms: "<<numTerms<<endl;

cout<< " "<<endl;

cout<<"Geometric Sequence: ";

//use the geometric sequence formula to generate the geometric sequence
for (int i = 1 ; i<n;i++){

cout<<a*pow(r,i-1)<<" ";

}
cout<< " "<<endl;

cout<<"\nGeneration Complete"<<endl;

cout<< " "<<endl;

}


void SequenceSpace::LinearSequence(int startValue,int endValue,int stepValue){

//display input from the user
cout<<"Linear Sequence Generation has Started"<<endl;

cout<< " "<<endl;

cout<<"Start Value: "<<startValue<<"\nEnd Value  : "<<endValue<<"\nStep Value : "<<stepValue<<endl;

cout<< " "<<endl;

cout<<"Linear Sequence: ";

//display the linear sequence
for(int i = startValue ;i<=endValue;i++){

cout<< i <<" ";

i = i + stepValue-1;

}
cout<< " "<<endl;

cout<<"\nGeneration Complete"<<endl;

cout<< " "<<endl;

}
