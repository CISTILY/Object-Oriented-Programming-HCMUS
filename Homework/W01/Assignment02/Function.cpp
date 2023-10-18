#include "Function.h"

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

void Triangle::inputTriangle () {
    do {

        cout << "* Input A point: " << endl;
        A.inputPoint();
        A.printPoint();
        cout << "* Input B point: " << endl;
        B.inputPoint();
        B.printPoint();
        cout << "* Input C point: " << endl;
        C.inputPoint();
        C.printPoint();

        if (!isValidTriangle()) {
            cout << "Caution: Invalid triangle !!!" << endl;
        }

    } while (!isValidTriangle());
}

void Triangle::printTriangle () {

    // cout << "Triangle's coordinates: A(" << this->A.printPoint()  << ", " << this->A.y << ") " 
    //                              << "B(" << this->B.x  << ", " << this->B.y << ") " 
    //                              << "C(" << this->C.x  << ", " << this->C.y << ")" << endl;
    cout << "Triangle's coordinates:" << endl;
    cout << "A "; this->A.printPoint();
    cout << "B "; this->B.printPoint();
    cout << "C "; this->C.printPoint();
}

bool Triangle::isValidTriangle () {

    float A = calcDistanceOfTwoPoints(this->A, this->B);
    float B = calcDistanceOfTwoPoints(this->A, this->C);
    float C = calcDistanceOfTwoPoints(this->B, this->C);

    if ((A + B) > C || (B + C) > A || (C + A) > B)
        return true;
    else
        return false;
}

void Triangle::findTypeOfTriangle () {

    float A = calcDistanceOfTwoPoints(this->A, this->B);
    float B = calcDistanceOfTwoPoints(this->A, this->C);
    float C = calcDistanceOfTwoPoints(this->B, this->C);

    float sqa = pow(A, 2);
    float sqb = pow(B, 2);
    float sqc = pow(C, 2);

    if (A == C && C == B)
        cout << "This triangle is Equilaterad" << endl;
    else if ((A > 0 && B > 0 && C > 0) && ((sqa + sqb) == sqc || sqa + sqc == sqb || sqc + sqb == sqa) && A == C || A == B || C == B)
        cout << "This tirangle is Isosceles Right" << endl;
    else if ((A > 0 && B > 0 && C > 0) && ((sqa + sqb) == sqc || sqa + sqc == sqb || sqc + sqb == sqa))
        cout << "This triangle is Right-angled" << endl;
    else if (A == C || A == B || C == B)
        cout << "This triangle is Isosceles" << endl;
    else
        cout << "This triangle is Scalene" << endl;
}

double Triangle::calcPerimeter () {
    return calcDistanceOfTwoPoints(this->A, this->B) + calcDistanceOfTwoPoints(this->A, this->C) + calcDistanceOfTwoPoints(this->B, this->C);
}

double Triangle::calcArea () {

    float p = calcPerimeter()/2;
    float A = calcDistanceOfTwoPoints(this->A, this->B);
    float B = calcDistanceOfTwoPoints(this->A, this->C);
    float C = calcDistanceOfTwoPoints(this->B, this->C);
    
    return sqrt(p * (p - A) * (p - B) * (p - C));
}

void Point::calcSumOfPoint (Point a, Point b, Point c) {
    x = (a.x + b.x + c.x) / 3;
    y = (a.y + b.y + c.y) / 3;
}

Point Triangle::findCenterG () {
    Point G;
    G.calcSumOfPoint(this->A, this->B, this->C);
    return G;
}