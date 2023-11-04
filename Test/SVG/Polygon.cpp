#include "Polygon.h"

using namespace std;

PolygonSVG::PolygonSVG() {
    Shape();
    cout << "Polygon::Default Constructor" << endl;
}

void PolygonSVG::buildPolygon (vector<char*> name, vector<char*> value, Properties polygon) {
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
            break;
        }
    }
    this->shape = polygon;
}

PolygonSVG::~PolygonSVG() {
    cout << "Polygon::Destructor" << endl;
}

void PolygonSVG::print() {
    for (int i = 0; i < this->points.size(); ++i) {
        this->points[i].print();
        cout << " ";
    }
    this->shape.print();
}