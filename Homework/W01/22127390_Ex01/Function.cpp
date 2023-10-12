#include "Function.h"

using namespace std;

void inputFraction (Fraction &a) {
    do {

        cout << "Input numerator: ";
        cin >> a.Numerator;
        cout << "Input denominator: ";
        cin >> a.Denominator;

        if (a.Denominator == 0)
            cout << "Invalid Denominator !" << endl;

    } while (a.Denominator == 0);
}

void printFraction (Fraction a) {
    cout << "Fraction: " << a.Numerator<< " / " << a.Denominator << endl;
} 

Fraction addTwoFraction (Fraction a, Fraction b) {
    Fraction result;
    if (a.Denominator == b.Denominator) {
        result.Numerator = a.Numerator + b.Numerator;
        result.Denominator = a.Denominator;
    }

    else {
        result.Denominator = a.Denominator*b.Denominator;
        result.Numerator = a.Numerator*b.Denominator + b.Numerator*a.Denominator;
    }
    return result;
}

Fraction subtractTwoFraction (Fraction a, Fraction b) {
    Fraction result;
    if (a.Denominator == b.Denominator) {
        result.Numerator = a.Numerator - b.Numerator;
        result.Denominator = a.Denominator;
    }

    else {
        result.Denominator = a.Denominator*b.Denominator;
        result.Numerator = a.Numerator*b.Denominator - b.Numerator*a.Denominator;
    }
    return result;
}

Fraction multiplyTwoFraction (Fraction a, Fraction b) {
    Fraction result;
    result.Numerator = a.Numerator*b.Numerator;
    result.Denominator = a.Denominator*b.Denominator;
    return result;
}

Fraction divideTwoFraction (Fraction a, Fraction b) {

    Fraction result;
    if (b.Numerator == 0)
	{
		result.Numerator = 0;
		result.Denominator = 0;

		return result;
	}
	
	result.Numerator = a.Numerator * b.Denominator;
	result.Denominator = a.Denominator * b.Numerator;
	return result;
}

Fraction reduceFraction (Fraction a) {

    for (int i = abs(a.Numerator); i > 0; --i)
        if (a.Numerator % i == 0 && a.Denominator % i == 0)
        {
            a.Numerator = a.Numerator / i;
            a.Denominator = a.Denominator / i;
            break;
        }
        
    if ((a.Numerator < 0 && a.Denominator < 0) || (a.Numerator > 0 && a.Denominator < 0))
    {
        a.Numerator = - a.Numerator;
        a.Denominator = - a.Denominator;
    }
        
    return a;
}

int compareTwoFraction(Fraction a, Fraction b) {

    int compare = subtractTwoFraction(a, b).Numerator;

    if (compare < 0)
        return -1;
    else if (compare == 0)
        return 0;
    else
        return 1;
}

bool isPositive (Fraction a) {
    if (reduceFraction(a).Numerator > 0)
        return true;
    return false;
}

bool isNegative (Fraction a) {
    if (reduceFraction(a).Numerator < 0)
        return true;
    return false;
}

bool isZero (Fraction a) {
    if (reduceFraction(a).Numerator == 0)
        return true;
    return false;
}