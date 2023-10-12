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

// int main ()
// {
//     // car Obj1;               // Create an object of car class

//     // // Access attributes and set values
//     // Obj1.name = "Mercedes";
//     // Obj1.year = 1997;

//     // // Print attributes values
//     // cout << "Car name: " << Obj1.name << endl;
//     // cout << "Release year: " << Obj1.year; 

//     // fruit Obj1, Obj2;
//     // Obj1.name = "Apple";
//     // Obj1.color = "Red";
//     // Obj1.weight = 300;

//     // Obj2.name = "Banana";
//     // Obj2.color = "Yellow";
//     // Obj2.weight = 400;

//     // Obj1.printFruit();
//     // Obj2.printFruit();
//     // cout << calculateTotalWeight(Obj1.weight, Obj2.weight);
    
//     room No1("Thành", 1, true);
//     room No2("Nhật", 2, true);
//     room No3("",3,false);

//     No1.printCustomer();
//     No2.printCustomer();
//     No3.printCustomer();
//     return 0;
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

int main ()
{
    car Mercedes;
    Mercedes.id = 1;
    Mercedes.year = 1970;
    Mercedes.print();
    return 0;
}