#include "Shape.h"

using namespace std;

class PolygonSVG : public Shape {
    private:
        vector<Point2D> points;
    public:
        PolygonSVG();
        ~PolygonSVG();

        void buildPolygon(vector<char*>, vector<char*>, Properties);
        void print();
};