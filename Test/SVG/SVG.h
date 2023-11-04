#ifndef SVG_H_
#define SVG_H_

#include <vector>
#include <iostream>
#include <cstring>
#include <fstream>
#include "Properties.h"

using namespace std;

class SVGReader {
    private:
        vector<char*> CommonAttrName;
        vector<char*> CommonAttrValue;
        vector<char*> OtherAttrName;
        vector<char*> OtherAttrValue;
        vector<string> content;
    public:
        ~SVGReader();

        void PropertiesBuilder(char*, char*, Properties&);
        void readContent ();
        vector<char*> getOtherAttrName ();
        vector<char*> getOtherAttrValue ();
        vector<string> getContent();
};

#endif