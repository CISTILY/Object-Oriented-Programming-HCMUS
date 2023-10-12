#include <iostream>

using namespace std;

class triangle {
    private:
        float a, b, c;
    public:
        triangle (float x, float y, float z) {
            a = x;
            b = y;
            c = z;
        }

        void DetermineTriangle () {
            if (a + b > c && a + c > b && b + c > a)
            {
                if (a == b && a == c)
                    cout << "This triangle is equilateral" << endl;
                else if (a == b || b == c || a == c)
                    cout << "This triangle is isosceles" << endl;
                else
                    cout << "this triangle is scalene" << endl;
            }
            else
                cout << "Invaild triangle" << endl;
        }
};