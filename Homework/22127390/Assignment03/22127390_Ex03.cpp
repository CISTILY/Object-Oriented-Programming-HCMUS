#include "Array.h"

using namespace std;

int main () {
    srand(time(0)); 

    string test = "0123456789515261261246132654154234";
    string result;
    int n = 0;
    
    cout << "==== Array operation ====" << endl;
    cout << "1. Default Constructor" << endl;
    cout << "2. Input size Constructor" << endl;
    cout << "3. Input array Constructor" << endl;
    cout << "4. Copy Constructor" << endl;
    cout << "5. String Constructor" << endl;
    cout << "6. toString method" << endl;
    cout << "7. clone method" << endl;

    cout << "=========================" << endl;
    MyIntArray a;
    result = a.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    cout << "Input Array's size: ";
    cin >> n;
    MyIntArray a1(n);
    result = a1.toString();
    a1.printOut(result);
    cout << "-------------------------" << endl;
    cout << "Input Array: ";
    cin >> n;
    int* arr = new int [n];
    for (int i = 0; i < n; ++i)
        arr[i] = rand() % 10;

    MyIntArray a2(arr, n);
    result = a2.toString();
    a2.printOut(result);
    cout << "-------------------------" << endl;
    MyIntArray a3(a2);
    result = a3.toString();
    a3.printOut(result);
    cout << "-------------------------" << endl;
    MyIntArray a4(test);
    result = a4.toString();
    a4.printOut(result);
    cout << "-------------------------" << endl;
    MyIntArray a5 = a4.clone();
    cout << "Clone method()" << endl;
    result = a5.toString();
    a5.printOut(result);
    cout << "-------------------------" << endl;

    delete[] arr;
    return 0;
}