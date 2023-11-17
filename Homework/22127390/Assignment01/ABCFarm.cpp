#include "ABCFarm.h"

using namespace std;

void ABCFarm::Input() {
    srand(time(NULL));
    int choice = 1, id;
    float weight, age;
    while (choice != 0) {
        cout << "Enter animal to add to farm: " << endl;
        cout << "1. DiaryCow" << endl;
        cout << "2. Goat" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << "==============================" << endl;
        if (choice == 0)
            break;

        cout << "Animal stat" << endl;
        ++id;
        cout << "weight: ";
        cin >> weight;
        // use weight = rand() % 100; for faster tesing
        cout << "Age: ";
        cin >> age;
        cout << "==============================" << endl;
        // use age = rand() % 10; for faster testing

        if (choice == 1) {
            DairyCow *obj = new DairyCow(id, weight, age);
            if (obj->checkValid() == true)
                this->cows.push_back(*obj);
            else {
                cout << "Invalid stats" << endl;
                delete obj;
                --id;
            }
                
        }
        else {
            Goat *obj = new Goat(id, weight, age);
            if (obj->checkValid() == true)
                this->goats.push_back(*obj);
            else {
                cout << "Invalid stats" << endl;
                delete obj;
                --id;
            }
                
        }
    }
}

void ABCFarm::Output() {
    cout << "Cows list: " << endl;
    for (int i = 0; i < cows.size(); ++i)
        cout << this->cows[i].ToString() << endl;

    cout << endl;
    cout << "Goats list: " << endl;
    for (int i = 0; i < goats.size(); ++i)
        cout << this->goats[i].ToString() << endl;
}

void ABCFarm::OutputByAge(int min, int max) {
    cout << "Cows list with filter: " << endl;
    for (int i = 0; i < cows.size(); ++i) {
        if (this->cows[i].getAge() >= min && this->cows[i].getAge() <= max)
            cout << this->cows[i].ToString() << endl;
    }
        
    cout << endl;
    cout << "Goats list with filter: " << endl;
    for (int i = 0; i < goats.size(); ++i)
       if (this->goats[i].getAge() >= min && this->goats[i].getAge() <= max)
            cout << this->goats[i].ToString() << endl;
}