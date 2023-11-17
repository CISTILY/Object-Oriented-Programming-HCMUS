#include "ABCFarm.h"

using namespace std;

int main () {
    int min, max;
    ABCFarm obj;

    obj.Input();
    obj.Output();
    cout << "==============================" << endl;
    cout << "Enter min, max age value for the filter: ";
    cin >> min >> max;
    obj.OutputByAge(min, max);
    return 0;
}