#include "Employee.h"

using namespace std;

class OfficeEmployee : public Employee {
private:
    int workdays;
    int payrate;
    long Salary;
public:
    OfficeEmployee();
    OfficeEmployee(int, string, int, string, int);
    OfficeEmployee(int, string, int, string, int, int);
    OfficeEmployee(int, string, int, string, int, int, long);
    OfficeEmployee(const OfficeEmployee&);

    ~OfficeEmployee();
    void inputInfo() override;
    void printInfo() override;

    long calculateSalary();
};