#include<iostream>

using namespace std;
 
// class A
// {
//   int x;
// public:
//   void setX(int i) {x = i;}
//   void print() { cout << x; }
// };
 
// class B: virtual public A
// {
// public:
//   B()  { setX(10); }
// };
 
// class C: virtual public A  
// {
// public:
//   C()  { setX(20); }
// };
 
// class D: public B, public C {
// };

// C++ program to implement 
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// first sub_class derived from class vehicle 
class fourWheeler : public Vehicle { 
public: 
	fourWheeler() 
	{ 
		cout << "Objects with 4 wheels are vehicles\n"; 
	} 
}; 
// sub class derived from the derived base class fourWheeler 
class Car : public fourWheeler { 
public: 
	Car() { cout << "Car has 4 Wheels\n"; } 
}; 


