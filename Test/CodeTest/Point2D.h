#include <iostream>

using namespace std;

class Point2D {
    private:
        int x;
        int y;
    public:
        Point2D();                      // Default construction
        Point2D(int, int);          // Characterized construction
        Point2D(const Point2D&);        // Copy construction
        void set (int, int);
        int getX ();
        int getY ();
        void move (int, int);
        friend istream& operator>> (istream &, Point2D&);
        friend ostream& operator<< (ostream&, Point2D&);
};

Point2D::Point2D() : x(0), y(0) {}

Point2D::Point2D(int a, int b) : x(a), y(b) {}

Point2D::Point2D(const Point2D& p) : x(p.x), y(p.y) {}

void Point2D::set(int a, int b) {
    this->x = a;
    this->y = b;
}

int Point2D::getX () {
    return this->x;
}

int Point2D::getY () {
    return this->y;
}

void Point2D::move (int a, int b) {
    this->x += a;
    this->y += b;
}

istream& operator>> (istream& in, Point2D& p) {
    in >> p.x >> p.y;
}

ostream& operator<< (ostream& out, Point2D& p) {
    out << p.x << " " << p.y;
}