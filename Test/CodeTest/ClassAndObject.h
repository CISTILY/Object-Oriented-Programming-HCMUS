
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

// class car {                 // Class decleration
//     public:                 // Access Specifier
//         string name;        // Attribute (string)
//         int year;           // Attribute (integer)
// };

// class fruit {
//     public:
//         string name, color;
//         int weight;
//         void printFruit() {
//             cout << name << " is " << color << " with " << weight << endl;
//         }
// };

// class room {
//     public:
//         string customer;
//         int id;
//         bool occupy;
//         room (string y, int z, bool t) {
//             customer = y;
//             id = z;
//             occupy = t;
//         }
//         void printCustomer();
// };

// void room::printCustomer() {
//     cout << customer << endl;
//     cout << "Room id: " << id << endl;
//     cout << "Occupation: " << occupy << endl;
// }

// int calculateTotalWeight(int weight1, int weight2) {
//     return weight1 + weight2;
// }


class car {
    private:
        int weight;
    protected:
        int id_protected;
    public:
        int id, year;
        
        void print() {
            weight = 300;
            cout << "Car's id: " << id << endl;
            cout << "Release date: " << year << endl;
            cout << "Car's weight: " << weight << endl;
        }
    
};

class ElectricCar : public car
{
    public:
    void setId(int id)
    {
         
        // Child class is able to access the inherited
        // protected data members of base class
         
        id_protected = id;
         
    }
     
    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};
