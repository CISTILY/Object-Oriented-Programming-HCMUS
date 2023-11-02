#include "Fraction.h"

using namespace std;

Fraction::Fraction() {
    this->Numerator = 0;
    this->Denominator = 1;
    cout << "Fraction::Default Constructor" << endl;
}

Fraction::~Fraction() {
    cout << "Fraction::Destructor" << endl;
}

Fraction::Fraction(const Fraction& a) {
    this->Numerator = a.Numerator;
    this->Denominator = a.Denominator;
    cout << "Fraction::Copy Constructor" << endl;
}

Fraction::Fraction(int a, int b) {
    this->Numerator = a;
    this->Denominator = b;
    cout << "Fraction::Double parameters Constructor" << endl;
}

Fraction &Fraction::operator= (const Fraction& obj) {
    Fraction result;
    result.Numerator = obj.Numerator;
    result.Numerator = obj.Denominator;
    return result;
}

Fraction operator+ (const Fraction& obj1, const Fraction& obj2) {
    Fraction result;
    if (obj1.Denominator == obj2.Denominator) {
        result.Numerator = obj1.Numerator + obj2.Numerator;
        result.Denominator = obj1.Denominator;
    }

    else {
        result.Denominator = obj1.Denominator*obj2.Denominator;
        result.Numerator = obj1.Numerator*obj2.Denominator + obj2.Numerator*obj1.Denominator;
    }
    return result;
}

Fraction operator- (const Fraction & obj1, const Fraction & obj2) {
    Fraction result;
    if (obj1.Denominator == obj2.Denominator) {
        result.Numerator = obj1.Numerator - obj2.Numerator;
        result.Denominator = obj1.Denominator;
    }

    else {
        result.Denominator = obj1.Denominator*obj2.Denominator;
        result.Numerator = obj1.Numerator*obj2.Denominator - obj2.Numerator*obj1.Denominator;
    }
    return result;
}

Fraction operator* (const Fraction & obj1, const Fraction & obj2) {
    Fraction result;
    result.Numerator = obj1.Numerator*obj2.Numerator;
    result.Denominator = obj1.Denominator*obj2.Denominator;
    return result;
}

Fraction operator/ (const Fraction & obj1, const Fraction & obj2) {
    Fraction result;
    if (obj2.Numerator != 0) {
        result.Numerator = obj1.Numerator * obj2.Denominator;
        result.Denominator = obj1.Denominator * obj2.Numerator;
    }
    else {
        result.Denominator = 0;
        result.Numerator = 0;
    }
    return result;
}

bool operator== (const Fraction & obj1, const Fraction & obj2) {
    if (obj1.Denominator == obj2.Denominator && obj2.Numerator == obj1.Numerator)
        return true;
    else 
        return false;
}

bool operator!= (const Fraction & obj1, const Fraction & obj2) {
    return !(obj1 == obj2);
}

bool operator>= (const Fraction & obj1, const Fraction & obj2) {
    return ((obj1.Numerator * obj2.Denominator) >= (obj1.Denominator * obj2.Numerator));
}

bool operator> (const Fraction & obj1, const Fraction & obj2) {
    return ((obj1.Numerator * obj2.Denominator) > (obj1.Denominator * obj2.Numerator));
}

bool operator<= (const Fraction & obj1, const Fraction & obj2) {
    return ((obj1.Numerator * obj2.Denominator) <= (obj1.Denominator * obj2.Numerator));
}

bool operator< (const Fraction & obj1, const Fraction & obj2) {
    return ((obj1.Numerator * obj2.Denominator) < (obj1.Denominator * obj2.Numerator));
}