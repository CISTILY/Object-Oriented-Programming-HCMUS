#include "SVG.h"

using namespace std;

SVGReader::~SVGReader() {
    cout << "SVGReader::Destructor" << endl;
}

void SVGReader::PropertiesBuilder(char* attrName, char* attrVal, Properties& shape) {

    if (strstr(attrName, "fill-opacity") != NULL || strstr(attrName, "fill") != NULL || strstr(attrName, "stroke-opacity") != NULL
     || strstr(attrName, "stroke-width") != NULL || strstr(attrName, "stroke") != NULL) {
        CommonAttrName.push_back(attrName);
        CommonAttrValue.push_back(attrVal);
    }
    else {
        OtherAttrName.push_back(attrName);
        OtherAttrValue.push_back(attrVal);
    }

    shape.buildProperties(CommonAttrName, CommonAttrValue);
}

void SVGReader::readContent() {
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
            this->content.push_back(text);
        }
    }
    fIn.close();
}

vector<char*> SVGReader::getOtherAttrName () {
    return this->OtherAttrName;
}

vector<char*> SVGReader::getOtherAttrValue() {
    return this->OtherAttrValue;
}

vector<string> SVGReader::getContent() {
    return this->content;
}