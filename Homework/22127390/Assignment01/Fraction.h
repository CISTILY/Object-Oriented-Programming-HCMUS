
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

    void reduce();

    Fraction();
    ~Fraction();
    Fraction(const Fraction&);
    Fraction(int, int);

    Fraction operator+(const Fraction&) const;
    Fraction operator-(const Fraction&) const;
    Fraction operator*(const Fraction&) const;
    Fraction operator/(const Fraction&) const;

    friend bool operator== (const Fraction&, const Fraction&);
    friend bool operator!= (const Fraction&, const Fraction&);
    friend bool operator>= (const Fraction&, const Fraction&);
    friend bool operator> (const Fraction&, const Fraction&);
    friend bool operator<= (const Fraction&, const Fraction&);
    friend bool operator< (const Fraction&, const Fraction&);
    friend Fraction operator+ (const Fraction&, int);
    friend Fraction operator+ (int, const Fraction&);
    friend Fraction operator* (int, const Fraction&);
    friend Fraction operator- (const Fraction&, int);
    friend ostream& operator<< (ostream&, const Fraction&);
    Fraction& operator+= (const Fraction& obj);
    Fraction& operator-= (const Fraction& obj);
    Fraction& operator*= (const Fraction& obj);
    Fraction& operator/= (const Fraction& obj);
    Fraction& operator++ ();
    Fraction& operator++ (int);
    Fraction& operator-- ();
    Fraction& operator-- (int);
    //float operator() (Fraction obj) const;
};

#endif