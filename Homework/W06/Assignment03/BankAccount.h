#include <iostream>

using namespace std;

class BankAccount {
private:
    static int AccountNumber;
    string nameOfOwner;
    int SocialID;
    double Balance;
public:
    void inputInfo();
    void printInfo();
    void deposit(double);
    void withdraw(double);
    double checkBalance();
}