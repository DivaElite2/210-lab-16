#include <iostream>
using namespace std;

class Color {
private:
    //color declaration
    int red;
    int green;
    int blue;

public:
Color()  {red = 255;}
Color(int b) {blue = b;}
Color(int green) {red = 252;}
 //pararmeter constructor
 Color(int blue, int b);
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