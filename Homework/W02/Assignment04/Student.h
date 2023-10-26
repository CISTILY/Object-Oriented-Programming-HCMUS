#include <iostream>
#include <cstring>

using namespace std;

class Student {
    private:
        int id;
        char* fullname;
        char* address;
        double gpa;
    public:
        Student ();
        Student (int);
        Student (int, char*, char*, double);
        Student (const Student&);
        Student (string);
        ~Student();
        string toString ();
        Student clone ();
};