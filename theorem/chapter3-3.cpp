#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() : Circle(1){};

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea(){
    return radius*radius*3.14;
}

int main(){
    Circle donut(10);

    // cout << "반지름 입력 : ";
    // cin >> donut.radius;

    cout << "도넛의 넓이는 " << donut.getArea() << endl;
}