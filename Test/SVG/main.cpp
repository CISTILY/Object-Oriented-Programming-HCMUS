#include "rapidxml.hpp"
#include "function.h"
#include "Properties.h"
#include "Rect.h"
#include "Circle.h"
#include "Text.h"
#include "Ellipse.h"
#include "Line.h"
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

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, PSTR, INT iCmdShow)
{
    HWND                hWnd;
    MSG                 msg;
    WNDCLASS            wndClass;
    GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR           gdiplusToken;

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

    vector<char*> name;
    vector<char*> value;
    vector<string> content;
    int i = 0;

    content = getContent();

    while (node != NULL) {
    char* nodeName = node->name();
    Properties a;
    for (xml_attribute<>* Attr = node->first_attribute(); Attr; Attr = Attr->next_attribute()) {

        char* attributeName = Attr->name();
        char* attributeValue = Attr->value();
        PropertiesBuilder(nodeName, attributeName, attributeValue, a, name, value);
    }
    string temp = nodeName;
    if (temp == "rect") {
        Square obj;
        obj.buildShape(name, value, a);
        obj.print();
    }
    else if (temp == "circle") {
        CircleSVG obj;
        obj.buildShape(name, value, a);
        obj.print();
    }

    else if (temp == "text") {
        TextSVG obj;
        obj.buildText(name, value, content[i], a);
        obj.print();
        i++;
    }

    else if (temp == "line") {
        LineSVG obj;
        obj.buildLine(name, value, a);
        obj.print();
    }

    else if (temp == "ellipse") {
        EllipseSVG obj;
        obj.buildEllipse(name, value, a);
        obj.print();
    }

    cout << endl;

    // xml_attribute<> *secondAttribute = firstAttribute->next_attribute();
    // Set breakpoint here to view value

    // Ref: http://rapidxml.sourceforge.net/manual.html
    node = node->next_sibling();
}
    
    

    return msg.wParam;
}  // WinMain