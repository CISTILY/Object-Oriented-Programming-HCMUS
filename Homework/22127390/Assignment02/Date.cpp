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
    cout << "Date::dd/mm/yy Constructor" << endl;
}

Date::Date (const Date& date) {
    this->day = date.day;
    this->month = date.month;
    this->year = date.year;
    cout << "Date::Copy Constructor" << endl;
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
    Date Tomorrow(*this);
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        Tomorrow.day++;
        if (Tomorrow.day > 31) {
            Tomorrow.day = 1;
            Tomorrow.month++;
            if (Tomorrow.month > 12) {
                Tomorrow.month = 1;
                Tomorrow.year++;
            }
        }
        break;
    
    case 4: case 6: case 9: case 11: 
        Tomorrow.day++;
        if (Tomorrow.day > 30) {
            Tomorrow.day = 1;
            Tomorrow.month++;
        }
        break;

    case 2:
        Tomorrow.day++;
        if (isLeap(Tomorrow.year) == true) 
            if (Tomorrow.day > 29) {
                Tomorrow.day = 1;
                Tomorrow.month++;
            }
        else 
            if (Tomorrow.day > 28) {
                Tomorrow.day = 1;
                Tomorrow.month++;
            }
        break;

    default:
        break;
    }
    
    return Tomorrow;
}

Date Date::Yesterday() {
    Date Yesterday(*this);
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        Yesterday.day--;
        if (Yesterday.day < 1) {
            Yesterday.day = 31;
            Yesterday.month--;
            if (Yesterday.month < 1) {
                Yesterday.month = 12;
                Yesterday.year--;
            }
        }
        break;
    
    case 4: case 6: case 9: case 11: 
        Yesterday.day--;
        if (Yesterday.day < 1) {
            Yesterday.day = 30;
            Yesterday.month--;
        }
        break;

    case 2:
        Yesterday.day--;
        if (isLeap(Yesterday.year) == true) 
            if (Yesterday.day < 1) {
                Yesterday.day = 29;
                Yesterday.month--;
            }
        else 
            if (Yesterday.day < 1) {
                Yesterday.day = 28;
                Yesterday.month--;
            }
        break;

    default:
        break;
    }
    
    return Yesterday;
}

ostream& operator<< (ostream& out, const Date& date) {
    out << date.day << "/" << date.month << "/" << date.year << endl;
    return out;
}

istream& operator>> (istream& in, Date& date) {
    do {
        cout << "Input a Date: ";
        in >> date.day >> date.month >> date.year;
        if ((date.day > 31 || date.day < 0) && (date.month > 12 || date.month < 0) && date.year < 0)
            cout << "Invalid date" << endl;
    } while ((date.day > 31 || date.day < 0) && (date.month > 12 || date.month < 0) && date.year < 0);
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
        result = result.Tomorrow();
     
    return result;
}

Date Date::operator- (int a) {

    Date result(*this);

    for (int i = 0; i < a; ++i)
        result = result.Yesterday();

    return result;
}

Date& Date::operator++ () {
    *this = this->Tomorrow();
    return *this;
}

Date Date::operator++(int) {
    Date old = *this;
    ++*this;
    return old;
}

Date& Date::operator-- () {
    *this = this->Yesterday();
    return *this;
}

Date Date::operator--(int) {
    Date old = *this;
    --*this;
    return old;
}

Date::operator int () {
    int day1 = this->day;
    for (int i = 1; i < this->month; ++i) {
        switch (i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            day1+= 31;
            break;
        
        case 4: case 6: case 9: case 11: 
            day1+= 30;
            break;

        case 2:
            if (isLeap(this->year) == true)
                day1 += 29;
            else    
                day1 += 28;
            break;

        default:
            break;
        }
    }
    return day1 - 1;
}

int Date::countLeapYear(Date) {
    int year = this->year;

    if (this->month <= 2)
        year--;
    
    return year / 4 - year / 100 + year / 400;
}

Date::operator long() {
    long days1 = this->year * 365 + this->day;
    
    for (int i = 1; i < this->month; ++i) {
        switch (i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days1+= 31;
            break;
        
        case 4: case 6: case 9: case 11: 
            days1+= 30;
            break;

        case 2:
            if (isLeap(this->year) == true)
                days1 += 29;
            else    
                days1 += 28;
            break;

        default:
            break;
        }
    }
    days1 += countLeapYear(*this);

    long days2 = 365;
    return days1 - days2;
}

Date& Date::operator+= (int a) {
    for (int i = 0; i < a; ++i)
        *this = this->Tomorrow();

    return *this;
}

Date& Date::operator-= (int a) {
    for (int i = 0; i < a; ++i)
        *this = this->Yesterday();

    return *this;
}