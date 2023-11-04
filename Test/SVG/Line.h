#include "Shape.h"

using namespace std;

class LineSVG : public Shape{
    private:
        Point2D end;
    public:
        LineSVG();
        ~LineSVG();

        void buildLine(vector<char*>, vector<char*>, Properties);
        void print ();
};