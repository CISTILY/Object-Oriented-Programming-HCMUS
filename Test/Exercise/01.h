#include <iostream>

using namespace std;

class circle {
    private:
        float radius;
    public:
        void input () {
            cout << "Radius input: ";
            cin >> radius;
        }
        float Calccircumference () {
            return radius*2*3.14;
        }
        float CalcCircleArea () {
            return radius*radius*3.14;
        }
};