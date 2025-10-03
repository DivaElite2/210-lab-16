#include <iostream>
using namespace std;

class Color {
private:
    //color declaration
    int red;
    int green;
    int blue;

public:
Color() {
    red = 255;
    green = 235;
    blue = 335;
}
Color(int hue) {
    red = hue;
    blue = hue;
    green = hue;

}
Color(int r, int g, int b) {
     red = r;
     blue = b;
     green = g;

}

int getRed() {return red;}
int getBlue() {return blue;}
int getGreen() {return green;}

 void print() {
 cout << "RGB: " << red << green << blue;
 }

};

int main(){
Color myColor1;
Color myColor2(245);
Color myColor3(256, 245, 235);

cout<< myColor1.getRed() <<endl;
cout << myColor2.getBlue();
return 0;

}