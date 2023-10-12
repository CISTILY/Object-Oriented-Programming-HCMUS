#include <iostream>
#include <math.h>

using namespace std;

struct Point {
    float x;
    float y;
};

float calcDistanceOfTwoPoints (Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

bool abc () {
    return 10 + 40 == 50;
}

bool test (Point a, Point b, Point c) {
    return (int)pow(calcDistanceOfTwoPoints(a, b), 2) + (int)pow(calcDistanceOfTwoPoints(a, c), 2) == (int)pow(calcDistanceOfTwoPoints(b, c), 2)
          || (int)pow(calcDistanceOfTwoPoints(a, b), 2) + (int)pow(calcDistanceOfTwoPoints(b, c), 2) == (int)pow(calcDistanceOfTwoPoints(a, c), 2)
          || (int)pow(calcDistanceOfTwoPoints(b, c), 2) + (int)pow(calcDistanceOfTwoPoints(a, c), 2) == (int)pow(calcDistanceOfTwoPoints(a, c), 2);
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
    cout << abc();
    return 0;
}