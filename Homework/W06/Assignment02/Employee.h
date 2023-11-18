#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    static int employID;
    string fullname;
    int hiredate;
    string address;
public:
    Employee();
    Employee(int);
    Employee(int, string);
    Employee(int, string, int);
    Employee(int, string, int, string);
    Employee(const Employee&);

    virtual ~Employee();
    virtual void inputInfo() = 0;
    virtual void printInfo() = 0;
};

int Employee::employID = 0;