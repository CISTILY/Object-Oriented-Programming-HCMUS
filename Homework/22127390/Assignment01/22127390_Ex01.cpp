#include "Point2D.h"

using namespace std;

int main () {
    int choice = 0, a, b;
    string temp;
    cout << "==== Point2D operation ====" << endl;
    cout << "1. Default Constructor" << endl;
    cout << "2. Single parameter Constructor" << endl;
    cout << "3. Double parameter Constructor" << endl;
    cout << "4. Copy Constructor" << endl;
    cout << "5. String Constructor" << endl;
    cout << "6. toString method" << endl;
    cout << "7. clone method" << endl;
    
    cout << "===========================" << endl;
    Point2D p;
    temp = p.toString();
    cout << temp << endl;
    cout << "---------------------------" << endl;
    cout << "Input a parameter: ";
    cin >> a;
    Point2D p1(a);
    temp = p1.toString();
    cout << "toString method called: " << temp << endl;
    cout << "---------------------------" << endl;
    cout << "Input two parameters: ";
    cin >> a >> b;
    Point2D p2(a, b);
    temp = p2.toString();
    cout << "toString method called: " << temp << endl;
    cout << "---------------------------" << endl;
    Point2D p3(p2);
    temp = p3.toString();
    cout << "toString method called: " << temp << endl;
    cout << "---------------------------" << endl;
    Point2D p4("-13, 5");
    temp = p4.toString();
    cout << "toString method called: " << temp << endl;
    cout << "---------------------------" << endl;
    cout << "clone() method" << endl;
    Point2D p5 = p4.clone();
    temp = p5.toString();
    cout << "toString method called: " << temp << endl;
    cout << "---------------------------" << endl;
    return 0;
}