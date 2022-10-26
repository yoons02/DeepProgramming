#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    double getArea();
};

double Circle::getArea(){
    return radius*radius*3.14;
}

int main(){
    Circle donut;

    cout << "반지름 입력 : ";
    cin >> donut.radius;

    cout << "도넛의 넓이는 " << donut.getArea() << endl;
}