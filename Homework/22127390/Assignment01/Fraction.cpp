#include "Fraction.h"

using namespace std;

void Fraction::reduce()
{
    for (int i = abs(this->Numerator); i > 0; --i)
        if (this->Numerator % i == 0 && this->Denominator % i == 0)
        {
            this->Numerator = this->Numerator / i;
            this->Denominator = this->Denominator / i;
            break;
        }

    if ((this->Numerator < 0 && this->Denominator < 0)
        || (this->Numerator > 0 && this->Denominator < 0))
    {
        this->Numerator = -this->Numerator;
        this->Denominator = -this->Denominator;
    }
}

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

Fraction Fraction::operator+(const Fraction& other) const
{
    Fraction result;
    result.Numerator = this->Numerator * other.Denominator + other.Numerator * this->Denominator;
    result.Denominator = this->Denominator * other.Denominator;

    result.reduce();
    return result;
}

Fraction Fraction::operator-(const Fraction& other) const
{
    Fraction result;
    result.Numerator = this->Numerator * other.Denominator - other.Numerator * this->Denominator;
    result.Denominator = this->Denominator * other.Denominator;

    result.reduce();
    return result;
}

Fraction Fraction::operator*(const Fraction& other) const
{
    Fraction result;
    result.Numerator = this->Numerator * other.Numerator;
    result.Denominator = this->Denominator * other.Denominator;

    result.reduce();
    return result;
}

Fraction Fraction::operator/(const Fraction& other) const
{
    Fraction result;
    result.Numerator = this->Numerator * other.Denominator;
    result.Denominator = this->Denominator * other.Numerator;

    result.reduce();
    return result;
}

bool operator== (const Fraction& obj1, const Fraction& obj2) {
    if (obj1.Denominator == obj2.Denominator && obj2.Numerator == obj1.Numerator)
        return true;
    else
        return false;
}

bool operator!= (const Fraction& obj1, const Fraction& obj2) {
    return !(obj1 == obj2);
}

bool operator>= (const Fraction& obj1, const Fraction& obj2) {
    return ((obj1.Numerator * obj2.Denominator) >= (obj1.Denominator * obj2.Numerator));
}

bool operator> (const Fraction& obj1, const Fraction& obj2) {
    return ((obj1.Numerator * obj2.Denominator) > (obj1.Denominator * obj2.Numerator));
}

bool operator<= (const Fraction& obj1, const Fraction& obj2) {
    return ((obj1.Numerator * obj2.Denominator) <= (obj1.Denominator * obj2.Numerator));
}

bool operator< (const Fraction& obj1, const Fraction& obj2) {
    return ((obj1.Numerator * obj2.Denominator) < (obj1.Denominator * obj2.Numerator));
}

Fraction operator+ (const Fraction& obj1, int b) {
    Fraction result;
    result.Numerator = obj1.Numerator + (obj1.Denominator * b);
    result.Denominator = obj1.Denominator;
    return result;
}

Fraction operator+ (int b, const Fraction& obj1) {
    Fraction result;
    result.Numerator = (obj1.Denominator * b) + obj1.Numerator;
    result.Denominator = obj1.Denominator;
    return result;
}

Fraction operator* (int b, const Fraction& obj1) {
    Fraction result;
    result.Numerator = obj1.Numerator * b;
    result.Denominator = obj1.Denominator;
    return result;
}

Fraction operator- (const Fraction& obj1, int b) {
    Fraction result;
    result.Numerator = obj1.Numerator - (obj1.Denominator * b);
    result.Denominator = obj1.Denominator;
    return result;
}

ostream& operator<< (ostream& out,const Fraction& obj) {
    out << obj.Numerator << " / " << obj.Denominator;
    return out;
}

Fraction& Fraction::operator+= (const Fraction& obj) {
    if (this->Denominator == obj.Denominator) {
        this->Numerator = this->Numerator + obj.Numerator;
    }
    else {
        this->Numerator = obj.Numerator * this->Denominator + obj.Denominator * this->Numerator;
        this->Denominator = this->Denominator * obj.Denominator;
    }
    return *this;
}

Fraction& Fraction::operator-= (const Fraction& obj) {
    if (this->Denominator == obj.Denominator) {
        this->Numerator = this->Numerator - obj.Numerator;
    }
    else {
        this->Numerator = obj.Numerator * this->Denominator - obj.Denominator * this->Numerator;
        this->Denominator = this->Denominator * obj.Denominator;
    }
    return *this;
}

Fraction& Fraction::operator*= (const Fraction& obj) {
    this->Numerator = this->Numerator * obj.Numerator;
    this->Denominator = this->Denominator * obj.Denominator;
    return *this;
}

Fraction& Fraction::operator/= (const Fraction& obj) {
    if (obj.Numerator != 0) {
        this->Numerator = this->Numerator * obj.Denominator;
        this->Denominator = this->Denominator * obj.Numerator;
    }
    else {
        this->Numerator = 0;
        this->Denominator = 0;
    }
    return *this;
}

Fraction& Fraction::operator++ () {
    *this + 1;
    return *this;
}

Fraction& Fraction::operator++ (int) {
    Fraction old = *this;
    operator++();
    return old;
}

Fraction& Fraction::operator-- () {
    *this - 1;
    return *this;
}

Fraction& Fraction::operator-- (int) {
    Fraction old = *this;
    operator--();
    return *this;
}
