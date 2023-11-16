#include "HCMUSStudent.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    // HCMUSStudent* Thanh = new HCMUSStudent (971232, "James Lee", "32 Vassar St.", 6, 2);
    // HCMUSPerson* Phuc = new HCMUSPerson (901289, "John Doe", "500 Massachusetts Ave.");
    // Class* c1 = new Class("MTH00053", "Toan hoc to hop");
    // Thanh->addClassTaken(c1);
    // Thanh->displayProfile();
    // Phuc->displayProfile();

    HCMUSPerson* steve =
    new HCMUSStudent(911923, "Steve", "99 Cambridge St.", 18, 3);

    steve->displayProfile();

    delete steve;
    return 0;
}