#include "Point2D.h"

using namespace std;

Point2D::Point2D() {
	cout << "Point2D::Double parameter Constructor" << endl;
}

Point2D::~Point2D() {
	cout << "Point2D::Destructor" << endl;
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