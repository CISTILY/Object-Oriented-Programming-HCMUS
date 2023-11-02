#include "Student.h"

using namespace std;

int main () {
    string test("22127390, Nguyen Van Le Ba Thanh, 123/32 Cong Quynh, 9.5");
    string result;
    string name, address;
    double score;
    int n;

    cout << "==== Student operation ====" << endl;
    cout << "1. Default Constructor" << endl;
    cout << "2. Single parameter Constructor" << endl;
    cout << "3. Four parameters Constructor" << endl;
    cout << "4. Copy Constructor" << endl;
    cout << "5. String Constructor" << endl;
    cout << "6. toString method" << endl;
    cout << "7. clone method" << endl;

    cout << "=========================" << endl;
    Student a;
    result = a.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    cout << "Input Student's ID: ";
    cin >> n;
    Student a1(n);
    result = a1.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    cout << "Input Student's ID: ";
    cin >> n;
    cin.ignore();
    cout << "Input Student's Full name: ";
    getline(cin, name);
    cout << "Input Address: ";
    getline(cin, address);
    cout << "Input Student's GPA: ";
    cin >> score;
    cout << "-------------------------" << endl;

    char* stu = new char [name.length()];
    strcpy(stu, name.c_str());
    char* add = new char [address.length()];
    strcpy(add, address.c_str());

    Student a2(n, stu, add, score);
    result = a2.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    Student a3(a2);
    result = a3.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    Student a4(test);
    result = a4.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;
    Student a5 = a4.clone();
    cout << "Clone method()" << endl;
    result = a5.toString();
    cout << result << endl;
    cout << "-------------------------" << endl;

    delete[] stu;
    delete[] add;
    return 0;
}