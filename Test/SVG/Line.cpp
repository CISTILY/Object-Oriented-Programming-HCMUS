#include "Line.h"

using namespace std;

LineSVG::LineSVG() {
    cout << "Line::Constructor" << endl;
}

LineSVG::~LineSVG() {
    cout << "Line::Destructor" << endl;
}

void LineSVG::buildLine (vector<char*> name, vector<char*> value, Properties line) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "x1") 
            this->begin.setX(atoi(value[i]));
        else if (temp == "y1") 
            this->begin.setY(atoi(value[i]));
        else if (temp == "x2")
            this->end.setX(atoi(value[i]));
        else if (temp == "y2")
            this->end.setY(atoi(value[i]));
    }
    this->line = line;
}

void LineSVG::print() {
    this->begin.print();
    cout << " ";
    this->end.print();
    cout << " ";
    this->line.print();
}