#include <iostream>
#include <math.h>

using namespace std;

struct Point {
    float x;
    float y;
};

double calcDistanceOfTwoPoints (Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

bool test (Point a, Point b, Point c) {
    int A = pow(calcDistanceOfTwoPoints(a, b), 2);
    int B = (int)pow(calcDistanceOfTwoPoints(a, c), 2);
    int C = (int)pow(calcDistanceOfTwoPoints(b, c), 2);
    cout << A << " " << B << " " << C;
    return ((A > 0 && B > 0 && C > 0) && ((A + B) == C || (A + C) == B || (B + C) == A));
}

int main () {
    Point a, b, c;
    a.x = -2; a.y = 3;
    b.x = 5; b.y = 2;
    c.x = -1; c.y = 0;
    cout << pow(calcDistanceOfTwoPoints(a, b), 2) << endl;
    cout << pow(calcDistanceOfTwoPoints(a, c), 2) << endl;
    cout << pow(calcDistanceOfTwoPoints(b, c), 2) << endl;
    cout << test(a, b, c);
    return 0;
}