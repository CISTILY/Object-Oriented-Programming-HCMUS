#include "Properties.h"

using namespace std;

Properties::Properties() {
    stroke = "Unidentify";
    stroke_width = -1;
    stroke_opacity = -1;
    fill = "Unidentify";
    fill_opacity = -1;
    cout << "Properties::Constructor" << endl;
}

Properties::~Properties() {
    cout << "Properties::Destructor" << endl;
}


///////////////// buildProperties function ////////////////////
/*
* Input parameters:
+ vector<char*> name contains vector of Attribute Name
+ vector<char*> value contains vector of Attribute Value

* Usage:
+ Type cast name[i] from char* to string
+ Convert value[i] to corresponding type (atoi for array to int)
+ Assign value to corresponding variable

* Output:
+ Properties variable with correct common properties from "sample.svg"
*/
///////////////////////////////////////////////////////////////
void Properties::buildProperties(vector<char*> name, vector<char*> value) {
    string temp;
    for (int i = 0; i < name.size(); ++i) {
        temp = name[i];
        if (temp == "stroke")
            stroke = value[i];
        else if (temp == "stroke-width")
            stroke_width = atoi(value[i]);
        else if (temp == "stroke-opacity")
            stroke_opacity = atof(value[i]);
        else if (temp == "fill")
            fill = value[i];
        else if (temp == "fill-opacity")
            fill_opacity = atof(value[i]);
    }
}
///////////////////////////////////////////////////////////////

void Properties::print() {
    cout << "(fill-opacity: " << this->fill_opacity << "), (fill: " << this->fill 
         << "), (stroke: " << this->stroke << "), (stroke-width: " << this->stroke_width << "), (stroke-opacity:" << this->stroke_opacity << ")" << endl;
}