#include "Shape.h"

using namespace std;

Shape::Shape () {
    Point2D();
    Properties();
    cout << "Shape::Constructor" << endl;
}

Shape::~Shape() {
    cout << "Shape::Destructor" << endl;
}