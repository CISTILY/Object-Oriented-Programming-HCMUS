#include "Polyline.h"

using namespace std;

PolylineSVG::PolylineSVG() {
    Shape();
    cout << "Polyline::Default Constructor" << endl;
}

void PolylineSVG::buildPolyline (vector<char*> name, vector<char*> value, Properties polyline) {
    string temp;
    this->points.clear();
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "points") {
            string point = value[i];
            while (true) {
                string dup;
                int pos = point.find(' ');
                if (pos == string::npos) {
                    Point2D a (point);
                    this->points.push_back(a);
                    break;
                }
                    
                dup = point.substr(0, pos);
                point.erase(0, pos+1);
                Point2D a (dup);
                this->points.push_back(a);
            }
        }
    }
    this->shape = polyline;
}

PolylineSVG::~PolylineSVG() {
    cout << "Polyline::Destructor" << endl;
}

void PolylineSVG::print() {
    for (int i = 0; i < this->points.size(); ++i) {
        this->points[i].print();
        cout << " ";
    }
    this->shape.print();
}