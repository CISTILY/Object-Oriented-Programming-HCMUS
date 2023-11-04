#include "Date.h"

using namespace std;

Date::Date() {
    this->day = 2;
    this->month = 11;
    this->year = 2012;
    cout << "Date::Default Constructor" << endl;
}

Date::Date(int year) {
    this->day = this->month = 1;
    this->year = year;
    cout << "Date::01/01/yy Constructor" << endl;
}

Date::Date(int year, int month) {
    this->day = 1;
    this->month = month;
    this->year = year;
    cout << "Date::01/mm/yy Constructor" << endl;
}

Date::Date(int year, int month, int day) {
    this->day = day;
    this->month = month;
    this->year = year;
    cout << "Date:: dd/mm/yy Constructor" << endl;
}

Date::Date (const Date& date) {
    this->day = date.day;
    this->month = date.month;
    this->year = date.year;
    cout << "Date:: Copy Constructor" << endl;
}

Date::~Date() {
    cout << "Date::Destructor" << endl;
}

Date& Date::operator= (const Date& date) {
    this->day = date.day;
    this->month = date.month;
    this->year = date.year;
    return *this;
}

bool isLeap (int year) {
    if (year % 400 == 0 || year % 4 == 0 && year % 100 == 1)
        return true;
    return false;
}

Date Date::Tomorrow() {

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        this->day++;
        if (this->day > 31) {
            this->day = 1;
            this->month++;
            if (this->month > 12) {
                this->month = 1;
                this->year++;
            }
        }
        break;
    
    case 4: case 6: case 9: case 11: 
        this->day++;
        if (this->day > 30) {
            this->day = 1;
            this->month++;
        }
        break;

    case 2:
        this->day++;
        if (isLeap(this->year) == true) 
            if (this->day > 29) {
                this->day = 1;
                this->month++;
            }
        else 
            if (this->day > 28) {
                this->day = 1;
                this->month++;
            }
        break;

    default:
        break;
    }
    Date Tomorrow(*this);
    return Tomorrow;
}

Date Date::Yesterday() {
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        this->day--;
        if (this->day < 0) {
            this->day = 31;
            this->month--;
            if (this->month < 1) {
                this->month = 12;
                this->year--;
            }
        }
        break;
    
    case 4: case 6: case 9: case 11: 
        this->day--;
        if (this->day < 0) {
            this->day = 30;
            this->month--;
        }
        break;

    case 2:
        this->day--;
        if (isLeap(this->year) == true) 
            if (this->day < 0) {
                this->day = 29;
                this->month--;
            }
        else 
            if (this->day < 0) {
                this->day = 28;
                this->month--;
            }
        break;

    default:
        break;
    }
    Date Yesterday(*this);
    return Yesterday;
}

ostream& operator<< (ostream& out, const Date& date) {
    out << date.day << "/" << date.month << "/" << date.year << endl;
    return out;
}

istream& operator>> (istream& in, Date& date) {
    in >> date.day >> date.month >> date.year;
    return in;
}

bool Date::operator== (const Date& date) {
    if (this->day == date.day && this->month == date.month && this->year == date.year)
        return true;
    return false;
}

bool Date::operator!= (const Date& date) {
    return !(*this == date);
}

bool Date::operator>= (const Date& date) {
    if (this->year >= date.year)
        if (this->month >= date.month)
            if (this->day >= date.day)
                return true;
    return false;
}

bool Date::operator> (const Date& date) {
    if (this->year > date.year)
        if (this->month > date.month)
            if (this->day > date.day)
                return true;
    return false;
}

bool Date::operator<= (const Date& date) {
    return !(*this >= date);
}

bool Date::operator< (const Date& date) {
    return !(*this > date);
}

Date Date::operator+ (int a) {

    Date result(*this);

    for (int i = 0; i < a; ++i)
        result.Tomorrow();
     
    return result;
}

Date Date::operator- (int a) {

    Date result(*this);

    for (int i = 0; i < a; ++i)
        result.Yesterday();

    return result;
}

Date& Date::operator++ () {
    this->Tomorrow();
    return *this;
}

Date Date::operator++(int) {
    Date old = *this;
    ++*this;
    return old;
}

Date& Date::operator-- () {
    this->Yesterday();
    return *this;
}

Date Date::operator-- (int) {
    Date old = *this;
    --*this;
    return old;
}

Date::operator int () {
    int result = 1;
    for (int i = 1; i <= 12; ++i) {
        switch (i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            result+= 31;
            break;
        
        case 4: case 6: case 9: case 11: 
            result+= 30;
            break;

        case 2:
            if (isLeap(this->year) == true)
                result += 29;
            else    
                result += 28;
            break;

        default:
            break;
        }
    }
    return result;
}

Date::operator long() {
    long result = 0;
    for (int i = this->year; i >= 1; --i)
        if (isLeap(i) == true)
            result += 366;
        else
            result += 365;
}