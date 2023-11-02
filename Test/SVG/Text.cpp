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
            this->p.setX(atoi(value[i]));
        else if (temp == "y")
            this->p.setY(atoi(value[i]));
        else if (temp == "font-size")
            this->setFontSize(atoi(value[i]));
    }
    this->text = effect;
    this->content = content;
}

void TextSVG::setFontSize(int size) {
    this->font_size = size;
}

void TextSVG::print() {
    this->p.print();
    cout << " " << this->font_size << " ";
    cout << this->content;
    this->text.print();
}