#include <iostream>

using namespace std;

class rectangle {
    private:
        float width;
        float length;
    public:
        void input() {
            cout << "Input width and length: ";
            cin >> width >> length;
        }
        float CalcPerimeter () {
            return (width+length)*2;
        }
        float CalcRectArea () {
            return width*length;
        }
};