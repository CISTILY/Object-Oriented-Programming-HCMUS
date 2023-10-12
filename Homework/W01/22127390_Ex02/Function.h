#include <iostream>
#include <math.h>

using namespace std;

struct Point {
    float x;
    float y;
};

struct Triangle {
    Point A, B, C;
};

void inputPoint (Point &);
void printPoint (Point);
float calcDistanceOfTwoPoints (Point, Point);
float calcDistanceToOx (Point);
float calcDistanceToOy (Point);

void inputTriangle (Triangle &);
void printTriangle (Triangle);
bool isValidTriangle (Triangle);
void findTypeOfTriangle (Triangle);
float calcPerimeter (Triangle);
float calcArea (Triangle);
Point findCenterG (Triangle);