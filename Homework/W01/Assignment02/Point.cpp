#include "Point.h"

using namespace std;

void Point::inputPoint () {

    cout << "Input x coordinate: ";
    cin >> this->x;
    cout << "Input y coordinate: ";
    cin >> this->y;
}

void Point::printPoint () {
    cout << "Point's coordinate: (" << this->x << ", " << this->y << ")" << endl;
}

double Point::calcDistanceOfTwoPoints (Point a, Point b) {
    return sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
}

double Point::calcDistanceToOx () {
    return abs(this->y);
}

double Point::calcDistanceToOy () {
    return abs(this->x);
}

double Point::getX() {
    return this->x;
}

double Point::getY() {
    return this->y;
}