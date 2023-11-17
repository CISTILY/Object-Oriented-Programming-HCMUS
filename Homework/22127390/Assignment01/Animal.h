#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Animal {
protected:
    int ID;
    float Weight;
    float Age;
public:
    Animal();
    Animal(int, float, float);
    Animal(const Animal&);
    virtual ~Animal();

    virtual int getID() = 0;
    virtual float getWeight() = 0;
    virtual float getAge() = 0;
    virtual void setWeight(float) = 0;
    virtual void setAge(float) = 0;
    virtual string ToString () = 0;
    virtual bool checkValid () = 0;
};

class DairyCow : public Animal {
public:
    DairyCow();
    DairyCow(int, float, float);
    DairyCow(const DairyCow&);
    ~DairyCow();

    int getID();
    float getWeight();
    float getAge();
    void setWeight(float);
    void setAge(float);

    string ToString ();
    DairyCow& operator= (const DairyCow&);

    bool checkValid();
};

class Goat : public Animal {
public:
    Goat();
    Goat(int, float, float);
    Goat(const Goat&);
    ~Goat();

    int getID();
    float getWeight();
    float getAge();
    void setWeight(float);
    void setAge(float);

    string ToString ();
    Goat& operator= (const Goat&);

    bool checkValid();
};

#endif