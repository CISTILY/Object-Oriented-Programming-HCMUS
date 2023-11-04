#include "Rect.h"

Square::Square() {
    cout << "Rectangle::Default Constructor" << endl;
}

Square::~Square() {
    cout << "Rectangle::Destructor" << endl;
}

void Square::buildRect(vector<char*> name, vector<char*> value, Properties rect) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "x")
            this->coordinate.setX(atoi(value[i]));
        else if (temp == "y")
            this->coordinate.setY(atoi(value[i]));
        else if (temp == "width")
            this->setWidth(atoi(value[i]));
        else if (temp == "height")
            this->setHeight(atoi(value[i]));
    }
    this->shape = rect;
}

void Square::setWidth(int w) {
    this->width = w;
}

void Square::setHeight(int h) {
    this->height = h;
}

void Square::print() {
    coordinate.print();
    cout << " " << this->width << " " << this->height << " ";
    shape.print();
}