#include <iostream>

using namespace std;

class HCMUSPerson {
protected:
    int id;
    string name;
    string address;

public:
    HCMUSPerson(int, string, string);

    virtual void displayProfile ();
    void changeAddress(string);
};  