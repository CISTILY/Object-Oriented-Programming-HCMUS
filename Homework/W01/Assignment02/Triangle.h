#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Point {
    protected: 
        double x;
        double y;
    public:
        void inputPoint ();                      // Get value for a variable with Point type
        void printPoint ();                        // Print out the value of Point type variable
        double calcDistanceOfTwoPoints (Point, Point);  // Calculate distance between two points
        double calcDistanceToOx ();                // Calculate distance from point A to Ox
        double calcDistanceToOy ();                // Calculate distance from point A to Oy
        void calcSumOfPoint (Point, Point, Point);
};

class Triangle : public Point {
    private:
        Point A, B, C;
    public:
        
        void inputTriangle ();                // Get value for a variable with Triangle type
        void printTriangle ();                  // Print out the value of Triangle type variable
                                                        // Output "Triangle's coordinates: A(A.x, A.y), B(B.x, B.y), C(C.x, C.y)"
        bool isValidTriangle ();                // Check if the input triangle is valid
        void findTypeOfTriangle ();             // Determine type of input Triangle
        double calcPerimeter ();                // Calculate input triangle's perimeter
        double calcArea ();                     // Calculate input triangle's Area
        Point findCenterG ();                   // Find center point G of input triangle
};

#endif // FUNCTION_H_