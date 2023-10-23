#include <iostream>
#include "Point2D.h"

using namespace std;

class Circle {
    private:
        Point2D center;
        double radius;
    public:
        Circle ();
        Circle (Point2D, double);
        Circle (const Circle&);
        void set (Point2D, double);
        Point2D getCenter ();
        double getRadius ();
        double getArea ();
        double getPerimeter();
        friend istream& operator>> (istream&, Circle);
        friend ostream& operator<< (ostream&, Circle);
};

Circle::Circle () : center(0, 0), radius(0) {}

Circle::Circle (Point2D g, double r) : center(g.getX(), g.getY()), radius(r) {}

Circle::Circle (const Circle& c) : center(c.center), radius(c.radius) {}

void Circle::set (Point2D g, double r) {
    this->center = g;
    this->radius = r;
}

Point2D Circle::getCenter () {
    return this->center;
}

double Circle::getRadius () {
    return this->radius;
}

double Circle::getArea () {
    return this->radius*this->radius*3.14;
}

double Circle::getPerimeter () {
    return 2*this->radius*3.14;
}

istream& operator>> (istream& in, Circle a) {
    in >> a.center >> a.radius;
}

ostream& operator<< (ostream& out, Circle a) {
    out << a.center << a.radius;
}