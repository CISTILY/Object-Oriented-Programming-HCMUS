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
    if (a < 0 || (b < 0 && a < 0)) {
        this->Numerator = a;
        this->Denominator = b;
    }
    else if (b < 0) {
        this->Numerator = -a;
        this->Denominator = -b;
    }
    
    cout << "Fraction::Double parameters Constructor" << endl;
}

Fraction& Fraction::operator= (const Fraction& obj1) {
    this->Numerator = obj1.Numerator;
    this->Denominator = obj1.Denominator;
    return *this;
}

Fraction Fraction::operator+ (const Fraction& obj1) {
    Fraction result;
    if (obj1.Denominator == this->Denominator) {
        result.Numerator = obj1.Numerator + this->Numerator;
        result.Denominator = obj1.Denominator;
    }

    else {
        result.Denominator = obj1.Denominator*this->Denominator;
        result.Numerator = obj1.Numerator*this->Denominator + this->Numerator*obj1.Denominator;
    }

    result.reduceFraction();

    return result;
}

Fraction Fraction::operator- (const Fraction & obj1) {
    Fraction result;
    if (obj1.Denominator == this->Denominator) {
        result.Numerator = this->Numerator - obj1.Numerator;
        result.Denominator = obj1.Denominator;
    }

    else {
        result.Denominator = obj1.Denominator*this->Denominator;
        result.Numerator = this->Numerator*obj1.Denominator - obj1.Numerator*this->Denominator;
    }

    result.reduceFraction();

    return result;
}

Fraction Fraction::operator* (const Fraction & obj1) {
    Fraction result;
    result.Numerator = obj1.Numerator*this->Numerator;
    result.Denominator = obj1.Denominator*this->Denominator;
    result.reduceFraction();
    return result;
}

Fraction Fraction::operator/ (const Fraction & obj1) {
    Fraction result;
    if (obj1.Numerator != 0) {
        result.Numerator = this->Numerator * obj1.Denominator;
        result.Denominator = this->Denominator * obj1.Numerator;
    }
    else {
        result.Denominator = 0;
        result.Numerator = 0;
    }

    result.reduceFraction();

    return result;
}

bool Fraction::operator== (const Fraction & obj1) {
    if (obj1.Denominator == this->Denominator && this->Numerator == obj1.Numerator)
        return true;
    return false;
}

bool Fraction::operator!= (const Fraction & obj1) {
    return !(*this == obj1);
}

bool Fraction::operator>= (const Fraction & obj1) {
    return ((obj1.Denominator * this->Numerator) >= (obj1.Numerator * this->Denominator));
}

bool Fraction::operator> (const Fraction & obj1) {
    return ((obj1.Denominator * this->Numerator) > (obj1.Numerator * this->Denominator));
}

bool Fraction::operator<= (const Fraction & obj1) {
    return ((obj1.Denominator * this->Numerator) <= (obj1.Numerator * this->Denominator));
}

bool Fraction::operator< (const Fraction & obj1) {
    return ((obj1.Denominator * this->Numerator) < (obj1.Numerator * this->Denominator));
}

Fraction operator+ (const Fraction & obj1, int b) {
    Fraction result;
    result.Numerator = obj1.Numerator + (obj1.Denominator * b);
    result.Denominator = obj1.Denominator;

    result.reduceFraction();

    return result;
}

Fraction operator+ (int b, const Fraction & obj1) {
    Fraction result;
    result.Numerator = (obj1.Denominator * b) + obj1.Numerator;
    result.Denominator = obj1.Denominator;

    result.reduceFraction();

    return result;
}

Fraction operator* (int b, const Fraction & obj1) {
    Fraction result;
    result.Numerator = obj1.Numerator * b;
    result.Denominator = obj1.Denominator;
    result.reduceFraction();
    return result;
}

Fraction operator- (const Fraction & obj1, int b) {
    Fraction result;
    result.Numerator = obj1.Numerator - (obj1.Denominator * b);
    result.Denominator = obj1.Denominator;

    result.reduceFraction();

    return result;
}

ostream& operator<< (ostream& out, const Fraction & obj) {
    out << obj.Numerator << "/" << obj.Denominator;
    return out;
}

Fraction& Fraction::operator+= (const Fraction & obj) {
    if (this->Denominator == obj.Denominator) {
        this->Numerator = this->Numerator + obj.Numerator;
    }
    else {
        this->Numerator = obj.Numerator* this->Denominator + obj.Denominator* this->Numerator;
        this->Denominator = this->Denominator * obj.Denominator;
    }

    this->reduceFraction();

    return *this;
}

Fraction& Fraction::operator-= (const Fraction & obj) {
    if (this->Denominator == obj.Denominator) {
        this->Numerator = this->Numerator - obj.Numerator;
    }
    else {
        this->Numerator = obj.Denominator* this->Numerator - obj.Numerator* this->Denominator;
        this->Denominator = this->Denominator * obj.Denominator;
    }

    this->reduceFraction();

    return *this;
}

Fraction& Fraction::operator*= (const Fraction & obj) {
    this->Numerator = this->Numerator* obj.Numerator;
    this->Denominator = this->Denominator*obj.Denominator;
    this->reduceFraction();
    return *this;
}

Fraction& Fraction::operator/= (const Fraction & obj) {
    if (obj.Numerator != 0) {
        this->Numerator = this->Numerator * obj.Denominator;
        this->Denominator = this->Denominator * obj.Numerator;
    }
    else {
        this->Numerator = 0;
        this->Denominator = 0;
    }

    this->reduceFraction();

    return *this;
}


Fraction& Fraction::operator++ () {
    *this = *this + 1;
    return *this;
}

Fraction Fraction::operator++ (int) {
    Fraction old = *this;
    ++*this;
    return old;
}

Fraction& Fraction::operator-- () {
    *this = *this - 1;
    return *this;
}

Fraction Fraction::operator-- (int) {
    Fraction old = *this;
    --*this;
    return old;
}

Fraction::operator float() const {
    return (float)this->Numerator/this->Denominator;
}

void Fraction::reduceFraction () {

    for (int i = abs(this->Numerator); i > 0; --i)
        if (this->Numerator % i == 0 && this->Denominator % i == 0)
        {
            this->Numerator = this->Numerator / i;
            this->Denominator = this->Denominator / i;
            break;
        }
        
    if ((this->Numerator < 0 && this->Denominator < 0) || (this->Numerator > 0 && this->Denominator < 0))
    {
        this->Numerator =- this->Numerator;
        this->Denominator =- this->Denominator;
    }
}