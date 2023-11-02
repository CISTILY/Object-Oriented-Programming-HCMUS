#include "function.h"
#include "Properties.h"
#include "Point2D.h"
#include <cstring>
#include <vector>

using namespace std;

/////////////////////// PropertiesBuilder function ////////////////////////////
/*
* Input parameters
+ char* nodeName contains name of node (rect, circle, text, etc)
+ char* attrName contains name of current attribute (Stroke, fill, Stroke-opacity, etc)
+ char* attrName contains value of coresponding attribute
+ Properties &shape to store common attribute(fill-opacity, fill, stroke-opacity, stroke-width, stroke)
+ vector<char*> & otherName to store attribute that not common
+ vector<char*> & otherValue to store value of otherName attributes

* Usage
+ Use strstr function to find (fill-opacity, fill, stroke-opacity, stroke-width, stroke) from attrName variable. 
If the attrName is common then add attrName to a char* vector and attrValue to another char* vector.
Else add the attribute into otherName and otherValue char* vector.
+ Call buildProperties function from Properties class to assign value from name and value char* vector

* Output
+ Properties that contains all common attributes
+ otherName and otherValue char* vector that contains attributes for specific Shape
*/
///////////////////////////////////////////////////////////////////////////////
void PropertiesBuilder(char* nodeName, char* attrName, char* attrVal, Properties& shape, vector<char*>& otherName, vector<char*>& otherValue) {
    char* find = NULL;
    vector<char*> name;
    vector<char*> value;

    if (strstr(attrName, "fill-opacity") != NULL || strstr(attrName, "fill") != NULL || strstr(attrName, "stroke-opacity") != NULL
        || strstr(attrName, "stroke-width") != NULL || strstr(attrName, "stroke") != NULL) {
        name.push_back(attrName);
        value.push_back(attrVal);
    }

    else {
        otherName.push_back(attrName);
        otherValue.push_back(attrVal);
    }

    shape.buildProperties(name, value);
}
///////////////////////////////////////////////////////////////////////////////



/////////////////// getContent function //////////////////////
/*
* Input Parameters: None

* Usage:
+ Continuously read through the "sample.svg" with getline function
+ If the line is text, then get the content of it

* Output:
+ vector<string> variable contains all text content in "sample.svg"
*/
/////////////////////////////////////////////////////////////
vector<string> getContent() {
    vector<string> content;
    ifstream fIn;
    fIn.open("sample.svg");
    string temp, text;
    while (getline(fIn, temp, '\n')) {
        if (temp.find("text") != string::npos) {
            text = temp;
            int pos = text.find(">");
            text = text.substr(pos + 1, text.length());
            pos = text.find("<");
            text = text.substr(0, pos);
            content.push_back(text);
        }
    }
    fIn.close();
    return content;
}
/////////////////////////////////////////////////////////////