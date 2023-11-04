#include "Point2D.h"

using namespace std;

Point2D::Point2D() : x(0), y(0) {
	cout << "Point2D::Double parameter Constructor" << endl;
}

Point2D::~Point2D() {
	cout << "Point2D::Destructor" << endl;
}

Point2D::Point2D(string s) {
    string temp;
    int p = s.find(',');
    temp = s.substr(0, p);
    this->x = stoi (temp);
    temp = s.substr(p+1, s.length());
    this->y = stoi (temp);
    cout << "Point2D::String Constructor" << endl;
}

void Point2D::setX(int x) {
	this->x = x;
}

void Point2D::setY(int y) {
	this->y = y;
}

void Point2D::print() {
	cout << this->x << " " << this->y;
}