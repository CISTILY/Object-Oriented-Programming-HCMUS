#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
#include <math.h>

using namespace std;

class Fraction {
    private:
        int Numerator;
        int Denominator;
    public:
        void inputFraction ();                              // Input Fraction
        void printFraction ();                              // Print out Fraction
        void addTwoFraction (Fraction, Fraction);           // Add Two Fractions
        void subtractTwoFraction (Fraction, Fraction);      // Subtract Two Fractions
        void multiplyTwoFraction (Fraction, Fraction);      // Multiply Two Fractions
        void divideTwoFraction (Fraction, Fraction);        // Divide Two Fractions
        void reduceFraction ();                             // Reduce a Fraction
        int compareTwoFraction(Fraction, Fraction);         // Compare Two Fractions
        bool isPositive ();                                 // Check if the given Fraction is Positive
        bool isNegative ();                                 // Check if the given Fraction is Negative
        bool isZero ();                                     // Check if the given Fraction is Zero
};

#endif