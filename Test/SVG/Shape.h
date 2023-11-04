#ifndef SHAPE_H_
#define SHAPE_H_

#include "Properties.h"
#include "Point2D.h"
#include <vector>
#include <iostream>

using namespace std;

class Shape {
    protected:
        Point2D coordinate;
        Properties shape;
    public:
        Shape();
        ~Shape();

        //void drawShape ();
};

#endif