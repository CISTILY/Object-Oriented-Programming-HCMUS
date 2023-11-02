#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Properties {
private:
	string stroke;
	int stroke_width;
	double stroke_opacity;
	string fill;
	double fill_opacity;
public:
	Properties();
	~Properties();

	void buildProperties (vector<char*>, vector<char*>);
	void print ();
};