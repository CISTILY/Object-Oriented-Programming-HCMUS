#pragma once

#include "Point2D.h"
#include "Circle.h"
#include "Properties.h"

using namespace std;

class EllipseSVG {
    private:
        Point2D center;
        int rx;
        int ry;
        Properties ellipse;
    public:
        EllipseSVG();
        ~EllipseSVG();

        void buildEllipse (vector<char*>, vector<char*>, Properties);
        void setRadiusX (int);
        void setRadiusY (int);
        void print();  
};