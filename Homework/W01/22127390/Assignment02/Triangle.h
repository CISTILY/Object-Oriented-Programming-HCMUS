#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Point.h"

using namespace std;
class Triangle {
    private:
        Point A, B, C;
    public:
        
        void inputTriangle ();                  // Get value for a variable with Triangle type
        void printTriangle ();                  // Print out the value of Triangle type variable
                                                // Output "Triangle's coordinates: A(A.x, A.y), B(B.x, B.y), C(C.x, C.y)"
        bool isValidTriangle ();                // Check if the input triangle is valid
        void findTypeOfTriangle ();             // Determine type of input Triangle
        double calcPerimeter ();                // Calculate input triangle's perimeter
        double calcArea ();                     // Calculate input triangle's Area
        Point findCenterG ();                   // Find center point G of input triangle
};

#endif