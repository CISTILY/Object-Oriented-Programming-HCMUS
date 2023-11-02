#include "Properties.h"
#include "Point2D.h"

class TextSVG {
    private:
        Point2D p;
        Properties text;
        int font_size;
        string content;
    public:
        TextSVG();
        ~TextSVG();

        void buildText (vector<char*>, vector<char*>, string, Properties);
        void setFontSize (int);
        void print ();
};