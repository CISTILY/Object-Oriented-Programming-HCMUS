#ifndef FARM_H_
#define FARM_H_

#include "Animal.h"
#include <cstdlib>
#include <time.h>

using namespace std;

class ABCFarm {
private:
    vector<DairyCow> cows;
    vector<Goat> goats;
public:
    void Input();
    void Output();
    void OutputByAge(int min, int max);
};

#endif