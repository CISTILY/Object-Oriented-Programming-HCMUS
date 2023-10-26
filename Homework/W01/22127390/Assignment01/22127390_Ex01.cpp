#include "Fraction.h"

using namespace std;

int main () {
    Fraction obj1;
    Fraction obj2;
    Fraction result;
    int choice = 0, compare = 0;
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
                obj1.inputFraction();
                break;
            case 2:
                cout << "--- Print Fraction ---" << endl;
                obj1.inputFraction();
                obj1.reduceFraction();
                cout << "Result "; obj1.printFraction();
                break;
            case 3:
                cout << "--- Add Two Fractions --- " << endl;
                cout << "Fraction 1" << endl;
                obj1.inputFraction();
                obj1.printFraction();
                cout << "-------------------------" << endl;
                cout << "Fraction 2" << endl;
                obj2.inputFraction();
                obj2.printFraction();
                cout << "-------------------------" << endl;
                result.addTwoFraction(obj1, obj2);
                result.reduceFraction();
                cout << "Result "; result.printFraction();
                break;
            case 4:
                cout << "--- Subtract Two Fractions --- " << endl;
                cout << "Fraction 1" << endl;
                obj1.inputFraction();
                obj1.printFraction();
                cout << "-------------------------" << endl;
                cout << "Fraction 2" << endl;
                obj2.inputFraction();
                obj2.printFraction();
                cout << "-------------------------" << endl;
                result.subtractTwoFraction(obj1, obj2);
                result.reduceFraction();
                cout << "Result "; result.printFraction();
                break;
            case 5:
                cout << "--- Multiply Two Fractions --- " << endl;
                cout << "Fraction 1" << endl;
                obj1.inputFraction();
                obj1.printFraction();
                cout << "-------------------------" << endl;
                cout << "Fraction 2" << endl;
                obj2.inputFraction();
                obj2.printFraction();
                cout << "-------------------------" << endl;
                result.multiplyTwoFraction(obj1, obj2);
                result.reduceFraction();
                cout << "Result "; result.printFraction();
                break;
            case 6:
                cout << "--- Divide Two Fractions --- " << endl;
                cout << "Fraction 1" << endl;
                obj1.inputFraction();
                obj1.printFraction();
                cout << "-------------------------" << endl;
                cout << "Fraction 2" << endl;
                obj2.inputFraction();
                obj2.printFraction();
                cout << "-------------------------" << endl;
                try {
                    result.divideTwoFraction(obj1, obj2);
                }
                catch (...) {
                    cout << "Cannot divide two fractions" << endl;
                    continue;
                }
                result.reduceFraction ();
                cout << "Result "; result.printFraction();
                break;
            case 7:
                cout << "--- Reduce a Fraction --- " << endl;
                obj1.inputFraction();
                obj1.reduceFraction();
                cout << "Result "; obj1.printFraction();
                break;
            case 8:
                cout << "--- Compare Two Fractions --- " << endl;
                cout << "Fraction 1" << endl;
                obj1.inputFraction();
                obj1.printFraction();
                cout << "-------------------------" << endl;
                cout << "Fraction 2" << endl;
                obj2.inputFraction();
                obj2.printFraction();
                cout << "-------------------------" << endl;
                compare = result.compareTwoFraction(obj1, obj2);
                if (compare < 0)
                    cout << "Fraction 1 smaller than Fraction 2" << endl;
                else if (compare == 0)
                    cout << "Fraction 1 equal with Fraction 2" << endl;
                else
                    cout << "Fraction 1 greater than Fraction 2" << endl;
                break;
            case 9:
                cout << "--- Check Positive --- " << endl;
                obj1.inputFraction();
                compare = obj1.isPositive();
                if (compare == 1)
                    cout << "Answer: True" << endl;
                else
                    cout << "Answer: False" << endl;
                break;
            case 10:
                cout << "--- Check Negative --- " << endl;
                obj1.inputFraction();
                compare = obj1.isNegative();
                if (compare == 1)
                    cout << "Answer: True" << endl;
                else
                    cout << "Answer: False" << endl;
                break;
            case 11:
                cout << "--- Check Zero --- " << endl;
                obj1.inputFraction();
                compare = obj1.isZero();
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