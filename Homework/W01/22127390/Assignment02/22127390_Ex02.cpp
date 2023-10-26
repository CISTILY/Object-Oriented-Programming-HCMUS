#include "Triangle.h"

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
                P_obj1.inputPoint();
                break;
            case 2:
                cout << "--- Ouput Point ---" << endl;
                P_obj1.printPoint();
                break;
            case 3:
                cout << "--- Calculate Distance from point A to point B ---" << endl;
                P_obj1.inputPoint();
                P_obj1.printPoint();
                P_obj2.inputPoint();
                P_obj2.printPoint();
                cout << fixed << setprecision(2) << "Result: " << P_obj1.calcDistanceOfTwoPoints(P_obj1, P_obj2) << endl;
                break;
            case 4:
                cout << "--- Distance to Ox ---" << endl;
                P_obj1.inputPoint();
                P_obj1.printPoint();
                cout << fixed << setprecision(2) << "Result: " << P_obj1.calcDistanceToOx() << endl;
                break;
            case 5:
                cout << "--- Distance to Oy ---" << endl;
                P_obj1.inputPoint();
                P_obj1.printPoint();
                cout << fixed << setprecision(2) << "Result: " << P_obj1.calcDistanceToOy() << endl;
                break;
            case 6:
                cout << "--- Input Triangle ---" << endl;
                T_obj.inputTriangle();
                break;
            case 7:
                cout << "--- Print Triangle ---" << endl;
                T_obj.printTriangle();
                break;
            case 8:
                cout << "--- Check if a Triangle is valid ---" << endl;
                T_obj.inputTriangle();
                T_obj.printTriangle();
                if (T_obj.isValidTriangle())
                    cout << "Answer: This Triangle is valid" << endl;
                break;
            case 9:
                cout << "--- Type of a triangle ---" << endl;
                T_obj.inputTriangle();
                T_obj.printTriangle();
                T_obj.findTypeOfTriangle();
                break;
            case 10:
                cout << "--- Calculate Triangle's Perimeter ---" << endl;
                T_obj.inputTriangle();
                T_obj.printTriangle();
                cout << fixed << setprecision(2) << "Result: " << T_obj.calcPerimeter() << endl;
                break;
            case 11:
                cout << "--- Calculate Triangle's Area ---" << endl;
                T_obj.inputTriangle();
                T_obj.printTriangle();
                cout << fixed << setprecision(2) << "Result: " << T_obj.calcArea() << endl;
                break;
            case 12:
                cout << "--- Find center G ---" << endl;
                T_obj.inputTriangle();
                T_obj.printTriangle();
                result = T_obj.findCenterG();
                cout << "G ";
                result.printPoint();
                break;
            default:
                cout << "Invalid key" << endl;
                break;
        }
    } while (choice != 0);
    return 0;
}