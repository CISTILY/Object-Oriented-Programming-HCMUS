#include <iostream>

using namespace std;

class IntArray {
private:
    int n;
    int* array;
public:

    // Constructors
    IntArray();
    IntArray(int);
    IntArray(int[], int);
    IntArray(const IntArray&);

    // Destructor
    ~IntArray();

    // Assign operator
    IntArray& operator= (const IntArray&);

    // Input and Output operators
    friend istream& operator>> (istream&, IntArray&);
    friend ostream& operator<< (ostream&, IntArray&);

    // Array index operator
    int& operator[] (int);

    // Type casting operator
    operator int();
};