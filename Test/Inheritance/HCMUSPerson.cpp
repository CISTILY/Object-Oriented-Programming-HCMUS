#include "HCMUSPerson.h"

using namespace std;

HCMUSPerson::HCMUSPerson(int id, string name, string address) {
    this->id = id;
    this->name = name;
    this->address = address;
}

void HCMUSPerson::displayProfile() {
    cout << "ID: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Address: " << this->address << endl; 
}

void HCMUSPerson::changeAddress(string s) {
    this->address = s;
}