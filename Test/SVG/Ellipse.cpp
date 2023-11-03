#include "Ellipse.h"

using namespace std;

EllipseSVG::EllipseSVG() {
    cout << "Ellipse::Constructor" << endl;
}

EllipseSVG::~EllipseSVG() {
    cout << "Ellipse::Destructor" << endl;
}

void EllipseSVG::buildEllipse (vector<char*> name, vector<char*> value, Properties ellipse) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "cx")
            this->center.setX(atoi(value[i]));
        else if (temp == "cy")
            this->center.setY(atoi(value[i]));
        else if (temp == "rx")
            this->setRadiusX(atoi(value[i]));
        else if (temp == "ry")
            this->setRadiusY(atoi(value[i]));
    }
    this->ellipse = ellipse;
}

void EllipseSVG::setRadiusX (int x) {
    this->rx = x;
}

void EllipseSVG::setRadiusY (int y) {
    this->ry = y;
}

void EllipseSVG::print () {
    this->center.print();
    cout << " " << this->rx << " " << this->ry << " ";
    this->ellipse.print();
}