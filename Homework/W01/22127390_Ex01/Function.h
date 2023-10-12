#pragma once

#include <iostream>
#include <math.h>

using namespace std;

struct Fraction {
    int Numerator;
    int Denominator;
};

void inputFraction (Fraction &);
void printFraction (Fraction);
Fraction addTwoFraction (Fraction, Fraction);
Fraction subtractTwoFraction (Fraction, Fraction);
Fraction multiplyTwoFraction (Fraction, Fraction);
Fraction divideTwoFraction (Fraction, Fraction);
Fraction reduceFraction (Fraction);
int compareTwoFraction(Fraction, Fraction);
bool isPositive (Fraction);
bool isNegative (Fraction);
bool isZero (Fraction);

