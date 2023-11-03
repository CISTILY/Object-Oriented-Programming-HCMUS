#pragma once

#include "Point2D.h"
#include "Properties.h"

using namespace std;

class CircleSVG : public Properties {
private:
    Point2D center;             // Center of circle
    int radius;                 // Radius of circle
    Properties circle;          // Stroke, fill properties of shape
public:
    CircleSVG();
    ~CircleSVG();

    void buildShape(vector<char*>, vector<char*>, Properties);
    void setRadius(int);
    void print();
};