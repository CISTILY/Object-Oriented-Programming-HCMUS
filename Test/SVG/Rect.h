#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	int width, height;
public:
	Square();
	~Square();

	void buildRect (vector<char*>, vector<char*>, Properties);
	void setWidth (int);
	void setHeight (int);
	void print ();
};