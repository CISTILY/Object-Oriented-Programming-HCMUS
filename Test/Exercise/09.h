#include <iostream>

using namespace std;

class Student {
    private:
        string name, room;
        int rollnumber;
        float mark;
        string rank;
    public:
        Student (string x, string y, int z, float t) {
            name = x;
            room = y;
            rollnumber = z;
            mark = t;
        }

        void SetMark () {
            if (mark > 9)
                rank = "A+";
            else if (mark >= 8 || mark <= 9)
                rank = "A";
            else if (mark >= 7 || mark <= 8)
                rank = "B+";
            else if (mark >= 6 || mark <= 7)
                rank = "B";
            else if (mark >= 5 || mark <= 6)
                rank = "C";
            else
                rank = "F";
        }

        void displayStudent () {
            cout << "Student's Name: " << name << endl;
            cout << "Student's Class: " << room << endl;
            cout << "Student's number: " << rollnumber << endl; 
            cout << "Student's mark: " << mark << endl;
            cout << "Final rank:" << rank << endl;
        }
};