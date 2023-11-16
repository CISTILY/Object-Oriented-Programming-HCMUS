#include "ABCFarm.h"

using namespace std;

Animal::Animal() {
    this->ID = this->Age = this->Weight = 0;
}

Animal::Animal(int id, float weight, float age) {
    this->ID = id;
    this->Weight = weight;
    this->Age = age;
}

Animal::Animal(const Animal& obj) {
    *this = obj;
}

Animal::~Animal() { }

DairyCow::DairyCow() : Animal() { }
DairyCow::DairyCow(int id, float weight, float age) : Animal(id, weight, age) { }
DairyCow::DairyCow(const DairyCow& obj) : Animal(obj) { }
DairyCow::~DairyCow() { }

int DairyCow::getID() {
    return this->ID;
}

float DairyCow::getWeight() {
    return this->Weight;
}

float DairyCow::getAge() {
    return this->Age;
}

void DairyCow::setAge(float age) {
    this->Age = age;
}

void DairyCow::setWeight(float weight) {
    this->Weight = weight;
}

string DairyCow::ToString() {
    string temp;
    temp += "ID: ";
    temp += to_string(this->ID);
    temp += " Weight: ";
    temp += to_string(this->Weight);
    temp += " Age: ";
    temp += to_string(this->Age);
    return temp;
}

DairyCow& DairyCow::operator= (const DairyCow& obj) {
    *this = obj;
    return *this;
}

bool DairyCow::checkValid() {
    if (this->Weight < 0 || this->Age < 0)
        return false;
    return true;
}

Goat::Goat() : Animal() { }
Goat::Goat(int id, float weight, float age) : Animal(id, weight, age) { }
Goat::Goat(const Goat& obj) : Animal(obj) { }
Goat::~Goat() { }

int Goat::getID() {
    return this->ID;
}

float Goat::getWeight() {
    return this->Weight;
}

float Goat::getAge() {
    return this->Age;
}

void Goat::setAge(float age) {
    this->Age = age;
}

void Goat::setWeight(float weight) {
    this->Weight = weight;
}

string Goat::ToString() {
    string temp;
    temp += "ID: ";
    temp += to_string(this->ID);
    temp += " Weight: ";
    temp += to_string(this->Weight);
    temp += " Age: ";
    temp += to_string(this->Age);
    return temp;
}

Goat& Goat::operator= (const Goat& obj) {
    *this = obj;
    return *this;
}

bool Goat::checkValid() {
    if (this->Weight < 0 || this->Age < 0)
        return false;
    return true;
}