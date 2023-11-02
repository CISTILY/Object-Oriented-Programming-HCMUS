#include "Point2D.h"

using namespace std;

Point2D::Point2D() : x(), y() {
    cout << "Point2D::Default Constructor" << endl;
}

Point2D::Point2D(int a) : x(a), y() {
    cout << "Point2D::Single parameter Constructor" << endl;
}

Point2D::Point2D(int a, int b) : x(a), y(b) {
    cout << "Point2D::Double parameter Constructor" << endl;
}

Point2D::Point2D(const Point2D& p) : x(p.x), y(p.y) {
    cout << "Point2D::Copy Constructor" << endl;
}

Point2D::Point2D(string s) {
    string temp;
    int p = s.find(',');
    temp = s.substr(0, p);
    x = stoi (temp);
    temp = s.substr(p+1, s.length());
    y = stoi (temp);
    cout << "Point2D::String Constructor" << endl;
}

Point2D::~Point2D() {
    cout << "Point2D::Destructor" << endl;
}

string Point2D::toString() {
    string temp;
    string a = to_string(x);
    string b = to_string(y);
    b.insert(0, ", ");
    temp = a + b;
    return temp;
}

Point2D Point2D::clone () {
    Point2D p;
    p.x = this->x;
    p.y = this->y;
    return p;
}

int Point2D::getX() {
    return this->x;
}

int Point2D::getY() {
    return this->y;
}

void Point2D::set (int a, int b) {
    this->x = a;
    this->y = b;
}

istream& operator>> (istream& in, Point2D& a) {
    in >> a.x >> a.y;
    return in;
}