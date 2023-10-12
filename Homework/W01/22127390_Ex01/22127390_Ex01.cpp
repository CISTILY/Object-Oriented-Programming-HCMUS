#include "Function.h"

using namespace std;

int main () {
    Fraction obj1;
    Fraction obj2;
    Fraction result;
    int choice, compare;
    cout << "==== Fraction operation ====" << endl;
    cout << "1. Input Fraction" << endl;
    cout << "2. Output Fration" << endl;
    cout << "3. Add 2 Fractions" << endl;
    cout << "4. Subtract 2 Fractions" << endl;
    cout << "5. Multiply 2 Fractions" << endl;
    cout << "6. Divide 2 Fractions" << endl;
    cout << "7. Reduce a Fraction" << endl;
    cout << "8. Compare 2 Fractions" << endl;
    cout << "9. Check if a fraction is Positive" << endl;
    cout << "10. Check if a fraction is Negative" << endl;
    cout << "11. Check if a fraction is Zero" << endl;
    cout << "0. To terminate the program" << endl;
    do {
        cout << "==========================" << endl;
        cout << "Your choice: ";
        cin >> choice; 
        cout << "==========================" << endl;
        switch (choice) {
            case 0:
                cout << "Terminating the program" << endl;
                break;
            case 1:
                cout << "--- Input Fraction ---" << endl;
                inputFraction(obj1);
                break;
            case 2:
                cout << "--- Print Fraction ---" << endl;
                printFraction(obj1);
                break;
            case 3:
                cout << "--- Add Two Fractions --- " << endl;
                inputFraction(obj1);
                inputFraction(obj2);
                result = addTwoFraction(obj1, obj2);
                result = reduceFraction(result);
                printFraction(result);
                break;
            case 4:
                cout << "--- Subtract Two Fractions --- " << endl;
                inputFraction(obj1);
                inputFraction(obj2);
                result = subtractTwoFraction(obj1, obj2);
                result = reduceFraction(result);
                printFraction(result);
                break;
            case 5:
                cout << "--- Multiply Two Fractions --- " << endl;
                inputFraction(obj1);
                inputFraction(obj2);
                result = multiplyTwoFraction(obj1, obj2);
                result = reduceFraction(result);
                printFraction(result);
                break;
            case 6:
                cout << "--- Divide Two Fractions --- " << endl;
                inputFraction(obj1);
                inputFraction(obj2);
                result = divideTwoFraction(obj1, obj2);
                result = reduceFraction (result);
                printFraction(result);
                break;
            case 7:
                cout << "--- Reduce a Fraction --- " << endl;
                inputFraction(obj1);
                result = reduceFraction(obj1);
                printFraction(result);
                break;
            case 8:
                cout << "--- Compare Two Fractions --- " << endl;
                inputFraction(obj1);
                inputFraction(obj2);
                compare = compareTwoFraction(obj1, obj2);
                if (compare < 0)
                    cout << "Fraction 1 smaller than Fraction 2" << endl;
                else if (compare == 0)
                    cout << "Fraction 1 equal with Fraction 2" << endl;
                else
                    cout << "Fraction 1 greater than Fraction 2" << endl;
                break;
            case 9:
                cout << "--- Check Positive --- " << endl;
                inputFraction(obj1);
                compare = isPositive(obj1);
                if (compare == 1)
                    cout << "Answer: True" << endl;
                else
                    cout << "Answer: False" << endl;
                break;
            case 10:
                cout << "--- Check Negative --- " << endl;
                inputFraction(obj1);
                compare = isNegative(obj1);
                if (compare == 1)
                    cout << "Answer: True" << endl;
                else
                    cout << "Answer: False" << endl;
                break;
            case 11:
                cout << "--- Check Zero --- " << endl;
                inputFraction(obj1);
                compare = isZero(obj1);
                if (compare == 1)
                    cout << "Answer: True" << endl;
                else
                    cout << "Answer: False" << endl;
                break;
            default:
                cout << "Invalid key" << endl;
                break;
        }
    } while (choice != 0);
    return 0;
}