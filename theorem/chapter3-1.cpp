#include <iostream>
using namespace std;

class Rectangle{
public:
    int width;
    int height;
    int area();
};

int Rectangle::area(){
    return width*height;
}

int main(){
    Rectangle rect;
    cout << "높이를 입력하세요 : ";
    cin >> rect.height;

    cout << "너비를 입력하세요 : ";
    cin >> rect.width;

    cout << "면적은 " << rect.area() << endl;
}
