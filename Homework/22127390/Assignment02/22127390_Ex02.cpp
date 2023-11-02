#include "Triangle.h"

using namespace std;

int main () {
    string test ("(-23, 5) (6, -30) (57, 36)");
    string result;
    Point2D A, B;
    cout << "==== Triangle operation ====" << endl;
    cout << "1. Default Constructor" << endl;
    cout << "2. Single parameter Constructor" << endl;
    cout << "3. Double parameter Constructor" << endl;
    cout << "4. Triple parameter Constructor" << endl;
    cout << "5. Copy Constructor" << endl;
    cout << "6. String Constructor" << endl;
    cout << "7. toString method" << endl;
    cout << "8. clone method" << endl;

    cout << "============================" << endl;
    Triangle p;
    result = p.toString();
    cout << result << endl;
    cout << "---------------------------" << endl;
    cout << "Input a Point parameter: ";
    cin >> A;
    Triangle p1(A);
    result = p1.toString();
    cout << "toString method called: " << result << endl;
    cout << "---------------------------" << endl;
    cout << "Input two Point parameters: ";
    cin >> A >> B;
    Triangle p2(A, B);
    result = p2.toString();
    cout << "toString method called: " << result << endl;
    cout << "---------------------------" << endl;
    Triangle p3(p2);
    result = p3.toString();
    cout << "toString method called: " << result << endl;
    cout << "---------------------------" << endl;
    Triangle p4(test);
    result = p4.toString();
    cout << "toString method called: " << result << endl;
    cout << "---------------------------" << endl;
    cout << "clone() method" << endl;
    Triangle p5 = p4.clone();
    result = p5.toString();
    cout << "toString method called: " << result << endl;
    cout << "---------------------------" << endl;
    return 0;
}