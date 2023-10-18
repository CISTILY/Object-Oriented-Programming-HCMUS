#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <iostream>
#include <math.h>

using namespace std;

struct Fraction {
    int Numerator;
    int Denominator;
};

void inputFraction (Fraction &);                        // Input Fraction
void printFraction (Fraction);                          // Print out Fraction
Fraction addTwoFraction (Fraction, Fraction);           // Add Two Fractions
Fraction subtractTwoFraction (Fraction, Fraction);      // Subtract Two Fractions
Fraction multiplyTwoFraction (Fraction, Fraction);      // Multiply Two Fractions
Fraction divideTwoFraction (Fraction, Fraction);        // Divide Two Fractions
Fraction reduceFraction (Fraction);                     // Reduce a Fraction
int compareTwoFraction(Fraction, Fraction);             // Compare Two Fractions
bool isPositive (Fraction);                             // Check if the given Fraction is Positive
bool isNegative (Fraction);                             // Check if the given Fraction is Negative
bool isZero (Fraction);                                 // Check if the given Fraction is Zero

#endif //FUNCTION_H_