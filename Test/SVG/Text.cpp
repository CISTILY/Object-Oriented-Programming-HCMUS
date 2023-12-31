#include "Text.h"

using namespace std;

TextSVG::TextSVG() {
    cout << "Text::Constructor" << endl;
}

TextSVG::~TextSVG() {
    cout << "Text::Destructor" << endl;
}

void TextSVG::buildText(vector<char*> name, vector<char*> value, string content, Properties effect) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "x")
            this->coordinate.setX(atoi(value[i]));
        else if (temp == "y")
            this->coordinate.setY(atoi(value[i]));
        else if (temp == "font-size")
            this->setFontSize(atoi(value[i]));
    }
    this->shape = effect;
    this->content = content;
}

void TextSVG::setFontSize(int size) {
    this->font_size = size;
}

void TextSVG::print() {
    this->coordinate.print();
    cout << " " << this->font_size << " ";
    cout << this->content;
    this->shape.print();
}