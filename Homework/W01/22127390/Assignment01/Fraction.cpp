#include "Fraction.h"

using namespace std;

void Fraction::inputFraction () {
    do {

        cout << "Input numerator: ";
        cin >> this->Numerator;
        cout << "Input denominator: ";
        cin >> this->Denominator;

        if (this->Denominator == 0)
            cout << "Invalid Denominator !" << endl;

    } while (this->Denominator == 0);
}

void Fraction::printFraction () {
    cout << "Fraction: " << this->Numerator<< " / " << this->Denominator << endl;
} 

void Fraction::addTwoFraction (Fraction a, Fraction b) {

    if (a.Denominator == b.Denominator) {
        this->Numerator = a.Numerator + b.Numerator;
        this->Denominator = a.Denominator;
    }

    else {
        this->Denominator = a.Denominator*b.Denominator;
        this->Numerator = a.Numerator*b.Denominator + b.Numerator*a.Denominator;
    }

}

void Fraction::subtractTwoFraction (Fraction a, Fraction b) {

    if (a.Denominator == b.Denominator) {
        this->Numerator = a.Numerator - b.Numerator;
        this->Denominator = a.Denominator;
    }

    else {
        this->Denominator = a.Denominator*b.Denominator;
        this->Numerator = a.Numerator*b.Denominator - b.Numerator*a.Denominator;
    }

}

void Fraction::multiplyTwoFraction (Fraction a, Fraction b) {

    this->Numerator = a.Numerator*b.Numerator;
    this->Denominator = a.Denominator*b.Denominator;

}

void Fraction::divideTwoFraction (Fraction a, Fraction b) {

    Fraction result;
    if (b.Numerator != 0) {
        this->Numerator = a.Numerator * b.Denominator;
        this->Denominator = a.Denominator * b.Numerator;
    }
    else {
        throw (b.Numerator);
    }

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

int Fraction::compareTwoFraction(Fraction a, Fraction b) {

    this->subtractTwoFraction(a, b);
    int compare = this->Numerator;

    if (compare < 0)
        return -1;
    else if (compare == 0)
        return 0;
    else
        return 1;
}

bool Fraction::isPositive () {
    this->reduceFraction();
    if (this->Numerator > 0)
        return true;
    return false;
}

bool Fraction::isNegative () {
    this->reduceFraction();
    if (this->Numerator < 0)
        return true;
    return false;
}

bool Fraction::isZero () {
    this->reduceFraction();
    if (this->Numerator == 0)
        return true;
    return false;
}