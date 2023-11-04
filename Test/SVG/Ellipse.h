#pragma once

#include "Shape.h"

using namespace std;

class EllipseSVG : public Shape{
    protected:
        int rx;
        int ry;
    public:
        EllipseSVG();
        ~EllipseSVG();

        void buildEllipse(vector<char*>, vector<char*>, Properties);
        void setRadiusX (int);
        void setRadiusY (int);
        void print();  
};