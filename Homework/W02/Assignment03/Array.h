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
        MyIntArray();
        MyIntArray(int);
        MyIntArray(int*, int);
        MyIntArray(const MyIntArray&);
        MyIntArray(string s);
        ~MyIntArray();
        string toString ();
        void printOut (string);
        MyIntArray clone ();
};

#endif