#include "Array.h"

using namespace std;

MyIntArray::MyIntArray() {
    this->n = 0;
    this->a = NULL;
    cout << "MyIntArray:Default Constructor" << endl;
}

MyIntArray::MyIntArray(int n) {
    this->n = n;
    this->a = new int [n];
    for (int i = 0; i < n; ++i)
        this->a[i] = 0;

    cout << "MyIntArray:Input size Constructor" << endl;
}

MyIntArray::MyIntArray(int *arr, int n) {
    this->n = n;
    this->a = new int [n];  
    for (int i = 0; i < n; ++i)
        this->a[i] = arr[i];

    cout << "MyIntArray:Input Array Constructor" << endl;
}

MyIntArray::MyIntArray(const MyIntArray& Arr) {
    this->n = Arr.n;
    this->a = new int [n];
    for (int i = 0; i < n; ++i)
        this->a[i] = Arr.a[i];

    cout << "MyIntArray:Copy Constructor" << endl;
}

MyIntArray::MyIntArray(string s) {
    this->n = s.length();
    this->a = new int [this->n];
    for (int i = 0; i < this->n; ++i) {
        this->a[i] = s[i] - '0';
    }
        
    cout << "MyIntArray:String Constructor" << endl;
}

MyIntArray::~MyIntArray() {
    cout << "MyIntArray:Destructor" << endl;
}

string MyIntArray::toString () {
    string temp;
    if (this->a == NULL) {
        temp = "Empty";
        return temp;
    }
    for (int i = 0; i < this->n; ++i)
        temp += to_string(this->a[i]);
    return temp;
}

MyIntArray MyIntArray::clone() {
    MyIntArray dup;
    dup.a = a;
    dup.n = n;
    return dup;
}

void MyIntArray::printOut (string n) {
    for (int i = 0; i < n.length(); ++i)
        cout << n[i] << " ";
    cout << endl;
}