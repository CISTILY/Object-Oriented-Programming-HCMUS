#include <iostream>

using namespace std;

class Date {
private:
    int day, month, year;
public:

    // Constructors
    Date ();
    Date (int);
    Date (int, int);
    Date (int, int, int);
    Date (const Date&);

    // Destructors
    ~Date();

    // Assign operator
    Date& operator= (const Date&);

    // Calculate Tomorrow date
    Date Tomorrow();

    // Calculate Yesterday date
    Date Yesterday();

    // Input and Output operators
    friend ostream& operator<< (ostream&, const Date&);
    friend istream& operator>> (istream&, Date&);

    // Compare operators
    bool operator== (const Date&);
    bool operator!= (const Date&);
    bool operator>= (const Date&);
    bool operator> (const Date&);
    bool operator<= (const Date&);
    bool operator< (const Date&);

    // Arithmetic operators
    Date operator+ (int);
    Date operator- (int);

    // Increasement operator
    Date& operator++ ();
    Date operator++ (int);

    // Decreasement operator
    Date& operator-- ();
    Date operator-- (int);


    // Utility function
    int countLeapYear(Date);

    // Type casting operators
    operator int();
    operator long();

    // Arithmetic and assign operators
    Date& operator+= (int);
    Date& operator-= (int);
};