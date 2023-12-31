#pragma once

#include "Ellipse.h"

using namespace std;

class CircleSVG : public EllipseSVG {
public:
    CircleSVG();
    ~CircleSVG();

    void buildCircle(vector<char*>, vector<char*>, Properties);
    void setRadius(int);
    void print();
};