#pragma once
#include <iostream>

using namespace std;

class Point2D {
private:
	int x;
	int y;
public:
	Point2D();
	Point2D(string);
	~Point2D();

	void setX(int);
	void setY(int);
	void print ();
};