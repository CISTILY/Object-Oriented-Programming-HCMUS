#include "Animal.h"

using namespace std;

class ABCFarm{
private:
    vector<DairyCow> cows;
    vector<Goat> goats;
public:
    void Input();
    void Output();
    void OutputByAge(int min, int max);
};