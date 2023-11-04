#include "Shape.h"

using namespace std;

class PolylineSVG : public Shape {
    private:
        vector<Point2D> points;
    public:
        PolylineSVG();
        ~PolylineSVG();

        void buildPolyline(vector<char*>, vector<char*>, Properties);
        void print();
};