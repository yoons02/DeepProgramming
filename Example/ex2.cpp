#include <iostream>
using namespace std;

class Rectangle{
public: // 왜 private로 하면 안돼??
    int width;
    int height;
    double getArea();
};

double Rectangle::getArea(){
    return width*height;
}

int main(){
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}