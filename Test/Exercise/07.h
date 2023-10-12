#include <iostream>

using namespace std;

class Employee {
    private:
        string name, employeeID;
        float salary;
    public:
        Employee (string x, string y, float z) {
            name = x;
            employeeID = y;
            salary = z;
        }

        void print() {
            cout << "Name: " << name << endl;
            cout << "ID:" << employeeID << endl;
            cout << "Current salary: " << salary << endl; 
        }
};
