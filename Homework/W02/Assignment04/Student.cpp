#include "Student.h"

using namespace std;

Student::Student() {
    this->id = 0;
    this->fullname = NULL;
    this->address = NULL;
    this->gpa = 0;

    cout << "Student::Default Constructor" << endl;
}

Student::Student (int id) {
    this->id = id;
    this->fullname = NULL;
    this->address = NULL;
    this->gpa = 0;

    cout << "Student::Single parameter Constructor" << endl;
}

Student::Student (int id, char* name, char* address, double p) {
    this->id = id;
    this->fullname = name;
    this->address = address;
    this->gpa = p;

    cout << "Student::Four parameter Constructor" << endl;
}

Student::Student (const Student& dup) {
    this->id = dup.id;
    this->fullname = dup.fullname;
    this->address = dup.address;
    this->gpa = dup.gpa;

    cout << "Student::Copy Constructor" << endl;
}

Student::Student (string s) {
    string temp;
    int p = s.find(',');
    temp = s.substr(0, p);
    this->id = stoi (temp);
    s.erase(0, p+2);

    p = s.find(',');
    temp = s.substr(0, p);
    int length = temp.length();
    this->fullname = new char[length+1];
    strcpy(this->fullname, temp.c_str());
    s.erase(0, p+2);
    
    p = s.find(',');
    temp = s.substr(0, p);
    length = temp.length();
    this->address = new char[length+1];
    strcpy(this->address, temp.c_str());
    s.erase(0, p+2);

    this->gpa = stod(s);
    s.erase(0, p+2);
    cout << "Studetn::String Constructor" << endl;
}

Student::~Student () {
    cout << "Student::Destructor" << endl;
}

string Student::toString () {
    string temp = "";
    string name; 
    string address;
    if (this->fullname == NULL && this->address == NULL) {
        name = "Empty";
        address = "Empty";
    }
    else {
        name = this->fullname;
        address = this->address;
    }
    temp += "Student's ID: " + to_string(this->id) + "\n";
    temp += "Full name: " + name + "\n";
    temp += "Address: " + address + "\n";
    temp += "GPA: " + to_string(this->gpa);
    return temp;
}

Student Student::clone () {
    Student a;
    a.id = this->id;
    a.fullname = this->fullname;
    a.address = this->address;
    a.gpa = this->gpa;
    return a;
}