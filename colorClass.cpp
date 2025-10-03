#include <iostream>
using namespace std;

class Color {
private:
    //color declaration
    int red;
    int green;
    int blue;

public:

    int getRedColor()  {return red; }
    void setRed(int r) {red = r;}

    int getGreenColor()  {return green; }
    void setGreen(int g) {green = g;}

    int getBlueColor()  {return blue; }
    void setBlue(int b) {blue = b;}
   
    //member print()
   void print() {
    cout << "Red: " << red << endl;
    cout << "Green: " << green <<endl;
    cout << "Blue: " << blue <<endl;
   }
   // default constructor
   Color()  {string colorName = "Red";}

//pararmeter constructor
   Color(string c, int n);
};

int main(){
Color myColor;
myColor.setRed(255);
myColor.setBlue(256);
myColor.setGreen(236);
myColor.print();

}