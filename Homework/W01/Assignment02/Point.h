#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Point {
    private: 
        double x;
        double y;
    public:
        void inputPoint ();                                 // Get value for a variable with Point type
        void printPoint ();                                 // Print out the value of Point type variable
        double calcDistanceOfTwoPoints (Point, Point);      // Calculate distance between two points
        double calcDistanceToOx ();                         // Calculate distance from point A to Ox
        double calcDistanceToOy ();                         // Calculate distance from point A to Oy
        void calcGPoint (Point, Point, Point);              // Calculate G point
        double getX();                                      // Get X value
        double getY();                                      // Get Y value
};

#endif