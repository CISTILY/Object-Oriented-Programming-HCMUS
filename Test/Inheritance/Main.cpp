#include "HCMUSStudent.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    HCMUSPerson* Thanh = new HCMUSStudent (971232, "James Lee", "32 Vassar St.", 6, 2);
    Class* c1 = new Class("MTH00053", "Toan hoc to hop");

    HCMUSStudent* Thanh2 = dynamic_cast<HCMUSStudent*> (Thanh);
    Thanh2->addClassTaken(c1);
    Thanh2->displayProfile();

    delete Thanh;
    return 0;
}