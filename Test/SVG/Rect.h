#pragma once
#include "Point2D.h"
#include "Properties.h"

class Square : public Properties {
private:
	Point2D p;
	int width, height;
	Properties effect;
public:
	Square();
	~Square();

	void buildShape (vector<char*>, vector<char*>, Properties);
	void setWidth (int);
	void setHeight (int);
	void print ();
};