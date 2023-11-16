#include "Animal.h"

using namespace std;

int main () {
    DairyCow obj1(3, 5, 2); 
    Goat obj2;
    cout << obj1.ToString() << endl;
    cout << obj2.ToString() << endl;
    DairyCow obj3;
    obj3 = obj1;
    cout << obj3.ToString() << endl;
    return 0;
}