#include <iostream>

using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date ();
    Date (int);
    Date (int, int);
    Date (int, int, int);
    Date (const Date&);
    ~Date();

    Date& operator= (const Date&);

    Date Tomorrow();
    Date Yesterday();

    friend ostream& operator<< (ostream&, const Date&);
    friend istream& operator>> (istream&, Date&);

    bool operator== (const Date&);
    bool operator!= (const Date&);
    bool operator>= (const Date&);
    bool operator> (const Date&);
    bool operator<= (const Date&);
    bool operator< (const Date&);

    Date operator+ (int);
    Date operator- (int);

    Date& operator++ ();
    Date operator++ (int);
    Date& operator-- ();
    Date operator-- (int);

    operator int();
    operator long();
};