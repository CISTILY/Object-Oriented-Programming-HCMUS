#ifndef _Triangle_
#define _Triangle_

#include <iostream>
#include "Point2D.h"

using namespace std;

class Triangle {
    private:
        Point2D A, B, C;
    public:
        Triangle ();
        Triangle (Point2D);
        Triangle (Point2D, Point2D);
        Triangle (Point2D, Point2D, Point2D);
        Triangle (const Triangle&);
        Triangle (string s);
        ~Triangle ();
        string toString ();
        Triangle clone ();
};

#endif