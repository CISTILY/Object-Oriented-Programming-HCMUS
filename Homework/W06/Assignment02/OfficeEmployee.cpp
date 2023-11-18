#include "OfficeEmployee.h"

using namespace std;

OfficeEmployee::OfficeEmployee() : Employee() { };
OfficeEmployee::OfficeEmployee(int id, string name, int hire, string address, int workday) : Employee(id, name, hire, address) {
    this->workdays = workday;
    this->payrate = 0;
    this->Salary = 0;
}

OfficeEmployee::OfficeEmployee(int id, string name, int hire, string address, int workday, int payrate) : Employee(id, name, hire, address) {
    this->workdays = workday;
    this->payrate = payrate;
    this->Salary = 0;
}

OfficeEmployee::OfficeEmployee(int id, string name, int hire, string address, int workday, int payrate, long Salary) : Employee(id, name, hire, address) {
    this->workdays = workday;
    this->payrate = payrate;
    this->Salary = Salary;
}

OfficeEmployee::OfficeEmployee(const OfficeEmployee& other) {
    *this = other;
}

OfficeEmployee::~OfficeEmployee() {
    cout << "OfficeEmployee::Destructor" << endl;
}

long OfficeEmployee::calculateSalary() {
    return this->Salary = this->workdays * this->payrate;
}

void OfficeEmployee::inputInfo() {
    cout << "Enter fullname: ";
    getline(cin, this->fullname);
    cout << "Enter hire day: ";
    cin >> this->hiredate;
    cout << "Enter address: ";
    getline(cin, this->fullname);
    cout << "Enter work hours: " << endl;
    cin >> this->workdays;
    cout << "Enter pay rate: " << endl;
    cin >> this->payrate;
}


void OfficeEmployee::printInfo () {
    cout << "========================" << endl;
    cout << "EmployeeID: " << this->employID << endl;
    cout << "Fullname: " << this->employID << endl;
    cout << "Hire date: " << this->hiredate << endl;
    cout << "Address: " << this->address << endl; 
    cout << "Work hours: " << this->workdays << endl;
    cout << "Pay rate: " << this->payrate << endl;
    cout << "Salary in a month: " << this->calculateSalary() << endl;
    cout << "========================" << endl;
}