#include <iostream>

using namespace std;

class car {
    private:
        string company;
        string model;
        int year;
    public:
        void input () {
            cin >> company >> model >> year;
        }
        void print () {
            cout << "Company's Name: " << company << endl;
            cout << "Model: " << model << endl;
            cout << "Release year: " << year << endl;
            cout << "----------------" << endl;
        }
};