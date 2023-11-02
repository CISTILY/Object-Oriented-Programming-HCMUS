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
        Fraction();
        ~Fraction();
        Fraction(const Fraction&);
        Fraction (int, int);
        Fraction &operator= (const Fraction&);
        friend Fraction operator+ (const Fraction &, const Fraction &);
        friend Fraction operator- (const Fraction &, const Fraction &);
        friend Fraction operator* (const Fraction &, const Fraction &);
        friend Fraction operator/ (const Fraction &, const Fraction &);
        friend bool operator== (const Fraction &, const Fraction &);
        friend bool operator!= (const Fraction &, const Fraction &);
        friend bool operator>= (const Fraction &, const Fraction &);
        friend bool operator> (const Fraction &, const Fraction &);
        friend bool operator<= (const Fraction &, const Fraction &);
        friend bool operator< (const Fraction &, const Fraction &);
};

#endif