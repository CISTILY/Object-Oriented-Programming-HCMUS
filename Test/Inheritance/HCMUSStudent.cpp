#include "HCMUSStudent.h"

using namespace std;

Class::Class(string ID, string name) {
    this->ID = ID;
    this->Name = name;
}

void Class::displayClass() {
    cout << this->ID << " (" << this->Name << ") ; ";
}

HCMUSStudent::HCMUSStudent(int id, string name, string address, 
                           int course, int year) : HCMUSPerson(id, name, address) // Call constructor of base class
{
    this->course = course;
    this->year = year;
}

void HCMUSStudent::displayProfile() {
    cout << "ID: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Address: " << this->address << endl;
    cout << "Courses: " << this->course << endl;
    cout << "Year: " << this->year << endl;
    for (int i = 0; i < classesTaken.size(); ++i)
        classesTaken[i]->displayClass();
}

void HCMUSStudent::addClassTaken(Class* course) {
    this->classesTaken.push_back(course);
}