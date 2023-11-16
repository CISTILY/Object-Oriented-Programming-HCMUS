#include "HCMUSPerson.h"
#include <iostream>
#include <vector>

using namespace std;

class Class {
private:
    string ID;
    string Name;
public:
    Class (string, string);

    void displayClass();
};

class HCMUSStudent : public HCMUSPerson {
private:
    int course;
    int year;
    vector<Class*> classesTaken;
public:
    HCMUSStudent(int, string, string, int, int);
    void displayProfile();
    void addClassTaken(Class*);
    //void changeCourse(int newCourse); 
};