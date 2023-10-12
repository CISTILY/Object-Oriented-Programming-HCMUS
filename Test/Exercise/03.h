#include <iostream>

using namespace std;

class person {
    private:
        string name, nation;
        int age;
    public:
        person (string x, string y, int z) {
            name = x;
            nation = y;
            age = z;
        }
        void printPerson() {
            cout << "Name: " << name << endl;
            cout << "Nation: " << nation << endl;
            cout << "Age: " << age << endl;
            cout << "---------" << endl;
        }
};