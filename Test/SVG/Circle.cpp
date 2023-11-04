#include "Circle.h"

using namespace std;

CircleSVG::CircleSVG() {
    Shape();
    cout << "Circle::Default Constructor" << endl;
}

CircleSVG::~CircleSVG() {
    cout << "Cricle::Destructor" << endl;
}

/////////////////// CircleSVG Constructor ///////////////////////
/*
* Input parameters: 
+ vector<char*> contains vector of Attribute Name
+ vector<char*> contains vector of Attribute Value
+ Properties variable built previously contains shape effect (stroke, fill, opacity, etc)

* Usage:
+ Type cast name[i] from char* to string
+ Convert value[i] to corresponding type (atoi for array to int)
+ Assign value to corresponding variable

* Output:
+ CricleSVG variable with correct properties from "sample.svg"
*/
/////////////////////////////////////////////////////////////////
void CircleSVG::buildCircle(vector<char*> name, vector<char*> value, Properties circle) {
    string temp;                                      
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];                                     // Type cast from char* to string
        if (temp == "cx")                                   
            this->coordinate.setX(atoi(value[i]));          // Set center x if temp = "cx"
        else if (temp == "cy")                      
            this->coordinate.setY(atoi(value[i]));          // Set center y if temp = "cy"
        else if (temp == "r")
            this->setRadius(atoi(value[i]));                // Set radius r if temp = "r"
    }
    this->shape = circle;                                   // Set Properties for the circle
}
/////////////////////////////////////////////////////////////////


void CircleSVG::print() {
    this->coordinate.print();
    cout << " " << this->rx << " ";
    this->shape.print();
}

void CircleSVG::setRadius(int r) {
    this->rx = r;
}