#include <iostream>

using namespace std;

class test {
    static int count;
    public:
        static int show () { return count; };
        test () { count++; }
        ~test () { count--; }
        int operator-> ();
        operator double();
};

int test::count = 0;

int main () {
    test a, b;
    cout << test::show() << endl;
    return 0;
}