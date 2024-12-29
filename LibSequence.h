#ifndef LIBSEQUENCE_H_INCLUDED
#define LIBSEQUENCE_H_INCLUDED

#include <string>

using namespace std;
namespace SequenceSpace{

//Function declaration for String Reverser
void reverseString(string word);

//Function declarartion for Geometric Sequence
void GeometricSequence(int startValue,double commonRatio,int numTerms);

//Funcrion Declaration for Linear Sequence
void LinearSequence(int startValue,int endValue,int stepValue);

}


#endif // LIBSEQUENCE_H_INCLUDED
