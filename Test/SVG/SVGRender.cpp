#include "SVGRender.h"

using namespace std;

void Renderer::printShapeInfo(char* name, SVGReader reader, Properties a, int& i) {
    string temp = name;
    if (temp == "rect") {
        this->rect.buildRect(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->rect.print();
    }
    else if (temp == "circle") {
        this->cir.buildCircle(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->cir.print();
    }

    else if (temp == "text") {
        this->text.buildText(reader.getOtherAttrName(), reader.getOtherAttrValue(), (reader.getContent()[i]), a);
        this->text.print();
        i++;
    }

    else if (temp == "line") {
        this->line.buildLine(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->line.print();
    }

    else if (temp == "ellipse") {
        this->elip.buildEllipse(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->elip.print();
    }

    else if (temp == "polygon") {
        this->polygon.buildPolygon(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->polygon.print();
    }

    else if (temp == "polyline") {
        this->polyline.buildPolyline(reader.getOtherAttrName(), reader.getOtherAttrValue(), a);
        this->polyline.print();
    }

    cout << endl;
}