#include <iostream>

using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date (int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        void IsValidDate () {
            if (year < 0) 
                cout << "Invalid year" << endl;
            else {
                switch (month) {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        if (day > 31 || day < 0)
                            cout << "Invalid date" << endl;
                        else
                            cout << "Valid date" << endl;
                        break;

                    case 4: case 6: case 9: case 11:
                        if (day > 30 || day < 0)
                            cout << "Invalid date" << endl;
                        else
                            cout << "Valid date" << endl;
                        break;

                    case 2:
                        if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0)
                            cout << "Invalid date" << endl;
                        else
                            cout << "Valid date" << endl;
                        break;
                    
                    default:
                        cout << "Invalid Month" << endl;
                        break;
                }
            }
        }
};