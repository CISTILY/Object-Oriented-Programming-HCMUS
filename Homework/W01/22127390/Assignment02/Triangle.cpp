#include "Triangle.h"

using namespace std;

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

    cout << "Triangle's coordinates:" << endl;
    cout << "A "; this->A.printPoint();
    cout << "B "; this->B.printPoint();
    cout << "C "; this->C.printPoint();
}

bool Triangle::isValidTriangle () {

    float A = this->A.calcDistanceOfTwoPoints(this->A, this->B);
    float B = this->B.calcDistanceOfTwoPoints(this->A, this->C);
    float C = this->C.calcDistanceOfTwoPoints(this->B, this->C);

    if ((A + B) <= C || (B + C) <= A || (C + A) <= B || this->calcArea() == 0)
        return false;
    else
        return true;
}

void Triangle::findTypeOfTriangle () {

    double A = this->A.calcDistanceOfTwoPoints(this->A, this->B);
    double B = this->B.calcDistanceOfTwoPoints(this->A, this->C);
    double C = this->C.calcDistanceOfTwoPoints(this->B, this->C);

    double sqa = pow(A, 2);
    double sqb = pow(B, 2);
    double sqc = pow(C, 2);

    cout << "A: " << (int)sqa << " B: " << (int)sqb << " C: " << (int)sqc << endl; 

    if (A == C && C == B)
        cout << "This triangle is Equilaterad" << endl;
    else if ((A > 0 && B > 0 && C > 0) && ((int)sqa + (int)sqb == (int)sqc || (int)sqa + (int)sqc == (int)sqb || (int)sqc + (int)sqb == (int)sqa) && (A == C || A == B || C == B))
        cout << "This tirangle is Isosceles Right" << endl;
    else if ((A > 0 && B > 0 && C > 0) && ((int)sqa + (int)sqb == (int)sqc || (int)sqa + (int)sqc == (int)sqb || (int)sqc + (int)sqb == (int)sqa))
        cout << "This triangle is Right-angled" << endl;
    else if (A == C || A == B || C == B)
        cout << "This triangle is Isosceles" << endl;
    else
        cout << "This triangle is Scalene" << endl;
}

double Triangle::calcPerimeter () {
    return this->A.calcDistanceOfTwoPoints(this->A, this->B) + this->B.calcDistanceOfTwoPoints(this->A, this->C) + this->C.calcDistanceOfTwoPoints(this->B, this->C);
}

double Triangle::calcArea () {

    float p = calcPerimeter()/2;
    float A = this->A.calcDistanceOfTwoPoints(this->A, this->B);
    float B = this->B.calcDistanceOfTwoPoints(this->A, this->C);
    float C = this->C.calcDistanceOfTwoPoints(this->B, this->C);
    
    return sqrt(p * (p - A) * (p - B) * (p - C));
}

void Point::calcGPoint (Point a, Point b, Point c) {
    x = (a.x + b.x + c.x) / 3;
    y = (a.y + b.y + c.y) / 3;
}

Point Triangle::findCenterG () {
    Point G;
    G.calcGPoint(this->A, this->B, this->C);
    return G;
}