#include "rapidxml.hpp"
#include "Shape.h"
#include "SVG.h"
#include "SVGRender.h"
#include <iostream>
#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
#include <vector>
#include <fstream>
using namespace std;
using namespace rapidxml;
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

int main () {
    // Read XML
    xml_document<> doc;
    xml_node<> *rootNode;
    // Read the xml file into a vector
    ifstream file("sample.svg");
    vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    buffer.push_back('\0');
    // Parse the buffer using the xml file parsing library into doc 
    doc.parse<0>(&buffer[0]);

    rootNode = doc.first_node("svg");
    xml_node<> *node = rootNode->first_node();

    int i = 0;
    Renderer print;

    while (node != NULL) {
        char* nodeName = node->name();
        Properties a;
        SVGReader reader;
        reader.readContent();
        for (xml_attribute<>* Attr = node->first_attribute(); Attr; Attr = Attr->next_attribute()) {

            char* attributeName = Attr->name();
            char* attributeValue = Attr->value();
            reader.PropertiesBuilder(attributeName, attributeValue, a);
        }
        print.printShapeInfo(nodeName, reader, a);
        // xml_attribute<> *secondAttribute = firstAttribute->next_attribute();
        // Set breakpoint here to view value

        // Ref: http://rapidxml.sourceforge.net/manual.html
        node = node->next_sibling();
    }   
}
    