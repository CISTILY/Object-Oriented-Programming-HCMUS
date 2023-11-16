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
        // Constructors
        Fraction();
        Fraction(const Fraction&);
        Fraction (int, int);

        // Destructor
        ~Fraction();
        
        // Assign operator
        Fraction& operator= (const Fraction &);

        // Arithmetic operators
        Fraction operator+ (const Fraction &);
        Fraction operator- (const Fraction &);
        Fraction operator* (const Fraction &);
        Fraction operator/ (const Fraction &);

        // Compare operators
        bool operator== (const Fraction &);
        bool operator!= (const Fraction &);
        bool operator>= (const Fraction &);
        bool operator> (const Fraction &);
        bool operator<= (const Fraction &);
        bool operator< (const Fraction &);

        // Arithmetic with an integer operators
        friend Fraction operator+ (int, const Fraction &);
        friend Fraction operator+ (const Fraction &, int);
        friend Fraction operator* (int, const Fraction &);
        friend Fraction operator- (const Fraction &, int);

        // Output operator
        friend ostream& operator<< (ostream&, const Fraction &);

        // Arithmetic and assign operators
        Fraction& operator+= (const Fraction & obj);
        Fraction& operator-= (const Fraction & obj);
        Fraction& operator*= (const Fraction & obj);
        Fraction& operator/= (const Fraction & obj);

        // Increasement operators
        Fraction& operator++ ();
        Fraction operator++ (int);

        // Decreasement operators
        Fraction& operator-- ();
        Fraction operator-- (int);

        // Type cast operator
        operator float () const;

        // Utility function
        void reduceFraction(); 
};

#endif