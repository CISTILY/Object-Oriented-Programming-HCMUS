#include "Circle.h"

using namespace std;

CircleSVG::CircleSVG() {
    cout << "Circle::Constructor" << endl;
}

CircleSVG::~CircleSVG() {
    cout << "Cricle::Destructor" << endl;
}

/////////////////// buildShape function ///////////////////////
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
///////////////////////////////////////////////////////////////
void CircleSVG::buildShape(vector<char*> name, vector<char*> value, Properties circle) {
    string temp;                                      
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];                                     // Type cast from char* to string
        if (temp == "cx")                                   
            this->center.setX(atoi(value[i]));              // Set center x if temp = "cx"
        else if (temp == "cy")                      
            this->center.setY(atoi(value[i]));              // Set center y if temp = "cy"
        else if (temp == "r")
            this->setRadius(atoi(value[i]));                // Set radius r if temp = "r"
    }
    this->circle = circle;                                  // Set Properties of the shape
}
///////////////////////////////////////////////////////////////


void CircleSVG::print() {
    center.print();
    cout << " " << this->radius << " ";
    circle.print();
}

void CircleSVG::setRadius(int r) {
    this->radius = r;
}