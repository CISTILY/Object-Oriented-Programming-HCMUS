#include "Shape.h"

class TextSVG : public Shape{
    private:
        int font_size;
        string content;
    public:
        TextSVG();
        ~TextSVG();

        void buildText(vector<char*>, vector<char*>, string, Properties);
        void setFontSize (int);
        void print ();
};