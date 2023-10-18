#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Triangle {
    Point A, B, C;
};

void inputPoint (Point &);                      // Get value for a variable with Point type
void printPoint (Point);                        // Print out the value of Point type variable
double calcDistanceOfTwoPoints (Point, Point);  // Calculate distance between two points
double calcDistanceToOx (Point);                // Calculate distance from point A to Ox
double calcDistanceToOy (Point);                // Calculate distance from point A to Oy
void inputTriangle (Triangle &);                // Get value for a variable with Triangle type
void printTriangle (Triangle);                  // Print out the value of Triangle type variable
                                                // Output "Triangle's coordinates: A(A.x, A.y), B(B.x, B.y), C(C.x, C.y)"
bool isValidTriangle (Triangle);                // Check if the input triangle is valid
void findTypeOfTriangle (Triangle);             // Determine type of input Triangle
double calcPerimeter (Triangle);                // Calculate input triangle's perimeter
double calcArea (Triangle);                     // Calculate input triangle's Area
Point findCenterG (Triangle);                   // Find center point G of input triangle

#endif // FUNCTION_H_