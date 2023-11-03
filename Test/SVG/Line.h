#include "Properties.h"
#include "Point2D.h"

using namespace std;

class LineSVG {
    private:
        Point2D begin;
        Point2D end;
        Properties line;
    public:
        LineSVG();
        ~LineSVG();

        void buildLine (vector<char*>, vector<char*>, Properties);
        void print ();
};