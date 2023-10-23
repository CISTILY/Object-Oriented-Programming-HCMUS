#include "inheritance.h"
#include "TypeOfInheritance.h"
#include "Circle.h"

using namespace std;

// main function 
int main() 
{ 
    Point2D b (3,2);
    Circle a(b,6);
    cout << a.getArea() << endl;
    cout << a.getPerimeter() << endl;
    cout << a;
    return 0; 
}