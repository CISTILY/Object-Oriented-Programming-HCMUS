#include "IntArray.h"

using namespace std;

IntArray::IntArray() {
    this->n = 0;
    cout << "IntArray::Default Constructor" << endl;
}

IntArray::IntArray(int size) {
    this->n = size;
    this->array = new int [n];
    for (int i = 0; i < n; ++i)
        this->array[i] = 0;

    cout << "IntArray::Size Constructor" << endl;
}

IntArray::IntArray(int arr[], int size) {
    this->n = size;
    this->array = new int [n];
    for (int i = 0; i < size; ++i)
        this->array[i] = arr[i];

    cout << "IntArray::Array Constructor" << endl;
}

IntArray::IntArray(const IntArray& arr) {
    this->n = arr.n;
    this->array = arr.array;
    
    cout << "IntArray::Copy Constructor" << endl;
}

IntArray::~IntArray() {
    delete[] this->array;
    cout << "IntArray::Destructor" << endl;
}

IntArray& IntArray::operator= (const IntArray& arr) {
    this->n = arr.n;
    this->array = arr.array;
    return *this;
} 

istream& operator>> (istream& in, IntArray& arr) {
    in >> arr.n;
    for (int i = 0; i < arr.n; ++i)
        in >> arr.array[i];

    return in;
}

ostream& operator<< (ostream& out, IntArray& arr) {
    out << "Size: " << arr.n << endl;
    out << "Elements: ";
    for (int i = 0; i < arr.n; ++i)
        out << arr.array[i] << " ";
    out << endl;

    return out;
}

int& IntArray::operator[] (int index) {
    return this->array[index];
}

IntArray::operator int() {
    return this->n;
}