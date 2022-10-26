#include <iostream>
using namespace std;

class Rectangle{
public:
    int width;
    int height;
    Rectangle();
    Rectangle(int w, int h);
    int area();
};

Rectangle::Rectangle() : Rectangle(1,1){};

Rectangle::Rectangle(int w, int h){
    width = w;
    height = h;
    cout << "너비가 " << w << ", 높이가 " << h << "인 사각형 생성" << endl;
}

int Rectangle::area(){
    return width*height;
}

int main(){
    Rectangle rect(12,4);
    // cout << "높이를 입력하세요 : ";
    // cin >> rect.height;

    // cout << "너비를 입력하세요 : ";
    // cin >> rect.width;

    cout << "면적은 " << rect.area() << endl;
}
