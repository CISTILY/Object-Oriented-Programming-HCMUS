#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        int id;
    protected:
        string address;
    public:
        void getPerson ();
        void printPerson ();
};

class Student : public Person {
    private:
        string classes;
        int fee;
    public:
        void setClass ();
        void printStudent ();
};

class Worker : public Person {
    private:
        string job;
        int salary;
    public:
        void setWorker ();
        void printWorker ();
};

void Person::getPerson () {
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
}

void Person::printPerson () {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

void Student::setClass () {
    getPerson();
    cout << "Input class: ";
    cin >> classes;
    cout << "Input fee: ";
    cin >> fee;
}

void Student::printStudent() {
    printPerson();
    cout << "Class: " << classes << endl;
    cout << "Fee: " << fee << endl;
}

void Worker::setWorker() {
    getPerson();
    cin.ignore();
    cout << "input Address: ";
    getline (cin, address);
    cout << "input Job: ";
    getline (cin, job);
    cout << "input salary: ";
    cin >> salary;
}

void Worker::printWorker() {
    printPerson();
    cout << "Address: " << address << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
}