#include <iostream>
#include "01.h"
#include "02.h"
#include "03.h"
#include "04.h"
#include "05.h"
#include "06.h"
#include "07.h"
#include "08.h"
#include "09.h"

int main () {
    //// Exercise 01
    // circle Obj1;
    // Obj1.input();
    // cout << Obj1.Calccircumference() << " " << Obj1.CalcCircleArea() << endl;

    // // Exercise 02
    // rectangle Obj2;
    // Obj2.input();
    // cout << Obj2.CalcPerimeter() << " " << Obj2.CalcRectArea() << endl;

    // // Exercise 03
    // person Obj3("Thanh", "VietNam", 19);
    // person Obj4("Kevin", "U.S.A", 23);
    // Obj3.printPerson();
    // Obj4.printPerson();

    // // Exercise 04
    // car Obj5;
    // Obj5.input();
    // Obj5.print();

    // // Exercise 05
    // bankaccount Obj6;
    // int count = 0;
    // Obj6.createAccount(count);
    // Obj6.print();
    // Obj6.deposit();
    // cout << endl;
    // Obj6.print();
    // cout << endl;
    // Obj6.withdraw();
    // cout << endl;
    // Obj6.print();

    // // Exercise 06
    // triangle Obj7(4, 4, 6);
    // Obj7.DetermineTriangle();
    // triangle Obj8(4, 4, 4);
    // Obj8.DetermineTriangle();
    // triangle Obj9(3, 4, 5);
    // Obj9.DetermineTriangle();

    // // Exercise 07
    // string name, ID;
    // float salary;
    // cout << "Enter employee's name: ";
    // cin >> name;
    // cout << "Enter employee's ID: ";
    // cin >> ID;
    // cout << "Enter employee's Salary: ";
    // cin >> salary;
    // Employee Obj10 (name, ID, salary);
    // Obj10.print();

    // // Exercise 08
    // int d, m, y;
    // cout << "Input Date (date month year): ";
    // cin >> d >> m >> y;
    // Date Obj11(d, m, y);
    // Obj11.IsValidDate();

    // // Exercise 09
    // string name, room;
    // int number;
    // float mark;
    // cin >> name >> room >> number >> mark;
    // Student Obj12(name, room, number, mark);
    // Obj12.SetMark();
    // Obj12.displayStudent();
    // return 0;

    int n = 5;
    for (int i = n; i >= 0; --i)
    {
        for (int k = n - i; i < 0; ++i)
            cout << " ";
        for (int j = i; j >= 0; --j)
            cout << "*";
        cout << endl;
    }
}