#include "Function.h"

using namespace std;

int main () {
    Triangle T_obj;
    Point P_obj1, P_obj2, result;
    int choice;
    cout << "==== Point operation ====" << endl;
    cout << "1. Input Point" << endl;
    cout << "2. Output Point" << endl;
    cout << "3. Distance from point A to point B" << endl;
    cout << "4. Distance to Ox" << endl;
    cout << "5. Distance to Oy" << endl;
    cout << "=== Triangle operation ===" << endl;
    cout << "6. Input Triangle" << endl;
    cout << "7. Ouput Triangle" << endl;
    cout << "8. Check if a Triangle is valid" << endl;
    cout << "9. Type of a triangle" << endl;
    cout << "10. Calculate Triangle's Perimeter" << endl;
    cout << "11. Calculate Triangle's Area" << endl;
    cout << "12. Find center G" << endl;
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
                cout << "--- Input Point ---" << endl;
                inputPoint(P_obj1);
                break;
            case 2:
                cout << "--- Ouput Point ---" << endl;
                printPoint(P_obj1);
                break;
            case 3:
                cout << "--- Calculate Distance from point A to point B ---" << endl;
                inputPoint(P_obj1);
                printPoint(P_obj1);
                inputPoint(P_obj2);
                printPoint(P_obj2);
                cout << fixed << setprecision(2) << "Result: " << calcDistanceOfTwoPoints(P_obj1, P_obj2) << endl;
                break;
            case 4:
                cout << "--- Distance to Ox ---" << endl;
                inputPoint(P_obj1);
                printPoint(P_obj1);
                cout << fixed << setprecision(2) << "Result: " << calcDistanceToOx(P_obj1) << endl;
                break;
            case 5:
                cout << "--- Distance to Oy ---" << endl;
                inputPoint(P_obj1);
                printPoint(P_obj1);
                cout << fixed << setprecision(2) << "Result: " << calcDistanceToOy(P_obj1) << endl;
                break;
            case 6:
                cout << "--- Input Triangle ---" << endl;
                inputTriangle(T_obj);
                break;
            case 7:
                cout << "--- Print Triangle ---" << endl;
                printTriangle(T_obj);
                break;
            case 8:
                cout << "--- Check if a Triangle is valid ---" << endl;
                inputTriangle(T_obj);
                printTriangle(T_obj);
                if (isValidTriangle(T_obj))
                    cout << "Answer: This Triangle is valid" << endl;
                break;
            case 9:
                cout << "--- Type of a triangle ---" << endl;
                inputTriangle(T_obj);
                printTriangle(T_obj);
                findTypeOfTriangle(T_obj);
                break;
            case 10:
                cout << "--- Calculate Triangle's Perimeter ---" << endl;
                inputTriangle(T_obj);
                printTriangle(T_obj);
                cout << fixed << setprecision(2) << "Result: " << calcPerimeter(T_obj) << endl;
                break;
            case 11:
                cout << "--- Calculate Triangle's Area ---" << endl;
                inputTriangle(T_obj);
                printTriangle(T_obj);
                cout << fixed << setprecision(2) << "Result: " << calcArea(T_obj) << endl;
                break;
            case 12:
                cout << "--- Find center G ---" << endl;
                inputTriangle(T_obj);
                printTriangle(T_obj);
                result = findCenterG(T_obj);
                printPoint(result);
                break;
            default:
                cout << "Invalid key" << endl;
                break;
        }
    } while (choice != 0);
    return 0;
}