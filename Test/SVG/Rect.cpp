#include "Rect.h"

Square::Square() {
    cout << "Rectangle::Constructor" << endl;
}

Square::~Square() {
    cout << "Rectangle::Destructor" << endl;
}

void Square::buildShape(vector<char*> name, vector<char*> value, Properties rect) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "x")
            this->p.setX(atoi(value[i]));
        else if (temp == "y")
            this->p.setY(atoi(value[i]));
        else if (temp == "width")
            this->setWidth(atoi(value[i]));
        else if (temp == "height")
            this->setHeight(atoi(value[i]));
    }
    this->effect = rect;
}

void Square::setWidth(int w) {
    this->width = w;
}

void Square::setHeight(int h) {
    this->height = h;
}

void Square::print() {
    p.print();
    cout << " " << this->width << " " << this->height << " ";
    effect.print();
}