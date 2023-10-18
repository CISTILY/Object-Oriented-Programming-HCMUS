#include "Function.h"

using namespace std;

void inputPoint (Point &a) {

    cout << "Input x coordinate: ";
    cin >> a.x;
    cout << "Input y coordinate: ";
    cin >> a.y;
}

void printPoint (Point a) {
    cout << "Point's coordinate: (" << a.x << ", " << a.y << ")" << endl;
}

double calcDistanceOfTwoPoints (Point a, Point b) {
    return sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
}

double calcDistanceToOx (Point a) {
    return abs(a.y);
}

double calcDistanceToOy (Point a) {
    return abs(a.x);
}

void inputTriangle (Triangle &a) {
    do {

        cout << "* Input A point: " << endl;
        inputPoint(a.A);
        printPoint(a.A);
        cout << "* Input B point: " << endl;
        inputPoint(a.B);
        printPoint(a.B);
        cout << "* Input C point: " << endl;
        inputPoint(a.C);
        printPoint(a.C);

        if (!isValidTriangle(a)) {
            cout << "Caution: Invalid triangle !!!" << endl;
        }

    } while (!isValidTriangle(a));
}

void printTriangle (Triangle a) {

    cout << "Triangle's coordinates: A(" << a.A.x  << ", " << a.A.y << ") " 
                                 << "B(" << a.B.x  << ", " << a.B.y << ") " 
                                 << "C(" << a.C.x  << ", " << a.C.y << ")" << endl; 
            
}

bool isValidTriangle (Triangle a) {

    float A = calcDistanceOfTwoPoints(a.A, a.B);
    float B = calcDistanceOfTwoPoints(a.A, a.C);
    float C = calcDistanceOfTwoPoints(a.B, a.C);

    if ((A + B) > C || (B + C) > A || (C + A) > B)
        return true;
    else
        return false;
}

void findTypeOfTriangle (Triangle a) {

    float A = calcDistanceOfTwoPoints(a.A, a.B);
    float B = calcDistanceOfTwoPoints(a.A, a.C);
    float C = calcDistanceOfTwoPoints(a.B, a.C);

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

double calcPerimeter (Triangle a) {
    return calcDistanceOfTwoPoints(a.A, a.B) + calcDistanceOfTwoPoints(a.A, a.C) + calcDistanceOfTwoPoints(a.B, a.C);
}

double calcArea (Triangle a) {

    float p = calcPerimeter(a)/2;
    float A = calcDistanceOfTwoPoints(a.A, a.B);
    float B = calcDistanceOfTwoPoints(a.A, a.C);
    float C = calcDistanceOfTwoPoints(a.B, a.C);
    
    return sqrt(p * (p - A) * (p - B) * (p - C));
}

Point findCenterG (Triangle a) {
    Point G;
    G.x = (a.A.x + a.B.x + a.C.x) / 3;
    G.y = (a.A.y + a.B.y + a.C.y) / 3;
    return G;
}