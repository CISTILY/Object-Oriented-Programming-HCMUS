#include "Employee.h"

using namespace std;

Employee::Employee() {
    this->employID++;
    this->fullname = this->address = "";
    this->hiredate = 0;
    cout << "Employee::Default Constructor" << endl;
}

Employee::Employee(int id) {
    this->employID = id;
    this->fullname = this->address = "";
    this->hiredate = 0;
    cout << "Employee::One parameter Constructor" << endl;
}

Employee::Employee(int id, string name) {
    this->employID = id;
    this->fullname = name;
    this->address = "";
    this->hiredate = 0;
    cout << "Employee::Two parameters Constructor" << endl;
}

Employee::Employee(int id, string name, int hire) {
    this->employID = id;
    this->fullname = name;
    this->address = "";
    this->hiredate = hire;
    cout << "Employee::Three parameters Constructor" << endl;
}

Employee::Employee(int id, string name, int hire, string address) {
    this->employID = id;
    this->fullname = name;
    this->address = address;
    this->hiredate = hire;
    cout << "Employee::Four parameters Constructor" << endl;
}

Employee::Employee(const Employee& other) {
    *this = other;
}

Employee::~Employee() {
    cout << "Employee::Destructor" << endl;
}

void Employee::inputInfo() {
    cout << "Enter fullname: ";
    getline(cin, this->fullname);
    cout << "Enter hire day: ";
    cin >> this->hiredate;
    cout << "Enter address: ";
    getline(cin, this->fullname);
}
