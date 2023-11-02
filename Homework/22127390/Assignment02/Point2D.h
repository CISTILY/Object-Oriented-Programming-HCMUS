#ifndef _POINT2D_
#define _POINT2D_

#include <iostream>

using namespace std;

class Point2D {
    private:
        int x;
        int y;
    public:
        Point2D();
        Point2D(int);
        Point2D(int, int);
        Point2D(const Point2D&);
        Point2D(string);
        ~Point2D();
        string toString ();
        Point2D clone ();
        int getX();
        int getY();
        void set(int a, int b);
        friend istream& operator>> (istream& in, Point2D&);
};

#endif