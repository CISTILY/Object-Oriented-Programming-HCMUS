#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Properties : public Color {
private:
	Color stroke;
	int stroke_width;
	double stroke_opacity;
	Color fill;
	double fill_opacity;
public:
	Properties();
	~Properties();

	void buildProperties (vector<char*>, vector<char*>);
	void print ();
};