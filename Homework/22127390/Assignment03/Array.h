#ifndef _Array_
#define _Array_

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class MyIntArray {
    private:
        int *a;
        int n;
    public:
        MyIntArray();                           // Default Constructor
        MyIntArray(int);                        // Single parameter Constructor
        MyIntArray(int*, int);                  // Double parameter Constructor
        MyIntArray(const MyIntArray&);          // Copy Constructor
        MyIntArray(string s);                   // String Constructor
        ~MyIntArray();                          // Destructor
        string toString ();                     // Convert to string method
        void printOut (string);                 // Print out a string
        MyIntArray clone ();                    // Clone() method
};

#endif