#include "Triangle.h"

using namespace std;

Triangle::Triangle () : A(0, 0), B(0, 0), C(0, 0) {
    cout << "Triangle::Default Constructor" << endl;
}

Triangle::Triangle (Point2D a) : A(a.getX(), a.getY()), B(0, 0), C(0, 0) {
    cout << "Triangle::Single parameter Constructor" << endl;
}

Triangle::Triangle (Point2D a, Point2D b) : A(a.getX(), a.getY()), B(b.getX(), b.getY()), C(0, 0) {
    cout << "Triangle::Double parameter Constructor" << endl;
}

Triangle::Triangle (Point2D a, Point2D b, Point2D c) : A(a.getX(), a.getY()), B(b.getX(), b.getY()), C(c.getX(), c.getY()) {
    cout << "Triangle::Triple parameter Constructor" << endl;
}

Triangle::Triangle (const Triangle &a) : A(a.A), B(a.B), C(a.C) {
    cout << "Triangle::Copy Constructor" << endl;
}

Triangle::Triangle (string s) {
    string temp;

    int pos = s.find(')');
    int p = s.find(',');
    temp = s.substr(1, p);
    int x = stoi (temp); 
    temp = s.substr(p+1, pos);
    int y = stoi (temp);
    A.set(x, y);
    s.erase(0, pos+2);

    pos = s.find(')');
    p = s.find(',');
    temp = s.substr(1, p);
    x = stoi (temp);
    temp = s.substr(p+1, pos);
    y = stoi (temp);
    B.set(x, y);
    s.erase(0, pos+2);

    pos = s.find(')');
    p = s.find(',');
    temp = s.substr(1, p);
    x = stoi (temp);
    temp = s.substr(p+1, pos);
    y = stoi (temp);
    C.set(x, y);
    s.erase(0, pos+2);
    cout << "Triangle::String Constructor" << endl;
}

Triangle::~Triangle() {
    cout << "Triangle::Destructor" << endl;
}

string Triangle::toString() {
    string temp;
    string a = to_string(A.getX());
    string b = to_string(A.getY());
    a.insert(0, "(");
    b.insert(0, ", ");
    b.insert(b.length(), ") ");
    temp += a + b;

    a = to_string(B.getX());
    b = to_string(B.getY());
    a.insert(0, "(");
    b.insert(0, ", ");
    b.insert(b.length(), ") ");
    temp += a + b;

    a = to_string(C.getX());
    b = to_string(C.getY());
    a.insert(0, "(");
    b.insert(0, ", ");
    b.insert(b.length(), ")");
    temp += a + b;
    return temp;
}

Triangle Triangle::clone () {
    Triangle result;
    result.A = this->A;
    result.B = this->B;
    result.C = this->C;
    return result;
}