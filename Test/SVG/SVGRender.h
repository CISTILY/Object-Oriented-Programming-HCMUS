#include "Shape.h"
#include "SVG.h"
#include "Rect.h"
#include "Circle.h"
#include "Polygon.h"
#include "Text.h"
#include "Line.h"
#include "Ellipse.h"
#include "Polyline.h"

using namespace std;

class Renderer {
    private:
        Square rect;
        CircleSVG cir;
        EllipseSVG elip;
        PolygonSVG polygon;
        LineSVG line;
        PolylineSVG polyline;
        TextSVG text;
    public:
        void printShapeInfo (char*, SVGReader, Properties, int&);
        // void drawShape ();
};