#include <iostream>

using namespace std;

class bankaccount {
    private:
        int accountNo;
        string AccountName;
        float balance;
    public:
        void createAccount(int count) {
            cout << "Enter Name: ";
            getline(cin, AccountName);
            accountNo = count;
            balance = 0;
            count++;
            cout << "-------------" << endl;
        }

        void deposit () {
            int id = 0;
            cout << "Account ID: ";
            cin >> id;
            cout << "-------------" << endl;
            if (id == accountNo) {
                cout << "Access granted" << endl;
                cout << "-------------" << endl;
                int amount = 0;
                cout << "Enter the money to deposit: ";
                cin >> amount;
                balance += amount;
            }
            else
                cout << "Wrong ID";
        }

        void withdraw () {
            int id = 0;
            cout << "Account ID: ";
            cin >> id;
            cout << "-------------" << endl;
            if (id == accountNo) {
                cout << "Access granted" << endl;
                cout << "-------------" << endl;
                int amount = 0;
                cout << "Enter the money to withdraw: ";
                cin >> amount;
                balance -= amount;
            }
            else
                cout << "Wrong ID";
        }

        void print () {
            cout << "Account's Name: " << AccountName << endl;
            cout << "Current Balance: " << balance << endl;
            cout << "-------------" << endl;
        }
};