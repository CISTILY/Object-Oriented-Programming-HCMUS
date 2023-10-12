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

float calcDistanceOfTwoPoints (Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

float calcDistanceToOx (Point a) {
    return abs(a.y);
}

float calcDistanceToOy (Point a) {
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
            cout << "Invalid triangle !!!" << endl;
        }

    } while (!isValidTriangle(a));
}

void printTriangle (Triangle a) {
    cout << "Triangle's coordinates: A(" << a.A.x  << ", " << a.A.y << ") " 
                                 << "B(" << a.B.x  << ", " << a.B.y << ") " 
                                 << "C(" << a.C.x  << ", " << a.C.y << ")" << endl; 
            
}

bool isValidTriangle (Triangle a) {
    if (calcDistanceOfTwoPoints(a.A, a.B) + calcDistanceOfTwoPoints(a.A, a.C) > calcDistanceOfTwoPoints(a.B, a.C)
     || calcDistanceOfTwoPoints(a.A, a.C) + calcDistanceOfTwoPoints(a.B, a.C) > calcDistanceOfTwoPoints(a.A, a.B)
     || calcDistanceOfTwoPoints(a.B, a.C) + calcDistanceOfTwoPoints(a.A, a.B) > calcDistanceOfTwoPoints(a.A, a.C))
        return true;
    else
        return false;
}

void findTypeOfTriangle (Triangle a) {
    if (calcDistanceOfTwoPoints(a.A, a.B) == calcDistanceOfTwoPoints(a.B, a.C)
    &&  calcDistanceOfTwoPoints(a.C, a.B) == calcDistanceOfTwoPoints(a.A, a.C))
        cout << "This triangle is Equilaterad" << endl;
    else if (calcDistanceOfTwoPoints(a.A, a.B) == calcDistanceOfTwoPoints(a.B, a.C)
    ||  calcDistanceOfTwoPoints(a.A, a.B) == calcDistanceOfTwoPoints(a.A, a.C)
    ||  calcDistanceOfTwoPoints(a.C, a.B) == calcDistanceOfTwoPoints(a.A, a.C))
        cout << "This triangle is Isosceles" << endl;
    else if ((pow(calcDistanceOfTwoPoints(a.A, a.B), 2) + pow(calcDistanceOfTwoPoints(a.A, a.C), 2)) == pow(calcDistanceOfTwoPoints(a.B, a.C), 2)
          || (pow(calcDistanceOfTwoPoints(a.A, a.B), 2) + pow(calcDistanceOfTwoPoints(a.B, a.C), 2)) == pow(calcDistanceOfTwoPoints(a.A, a.C), 2)
          || (pow(calcDistanceOfTwoPoints(a.B, a.C), 2) + pow(calcDistanceOfTwoPoints(a.A, a.C), 2)) == pow(calcDistanceOfTwoPoints(a.A, a.B), 2)) 
        cout << "This triangle is Right-angled" << endl;
    else
        cout << "This triangle is Scalene" << endl;
}

float calcPerimeter (Triangle a) {
    return calcDistanceOfTwoPoints(a.A, a.B) + calcDistanceOfTwoPoints(a.A, a.C) + calcDistanceOfTwoPoints(a.B, a.C);
}

float calcArea (Triangle a) {
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