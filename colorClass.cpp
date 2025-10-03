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
    blue = hue

}
Color(int green) {red = 252;}
 //pararmeter constructor
 Color(int blue, int b);

 //setters and getters
 void setColor(int n )
};

int main(){
Color myColor;
myColor.setRed(255);
myColor.setBlue(256);
myColor.setGreen(236);

Color color_1;
cout << color_1.getRedColor() << endl;
myColor.print();

}