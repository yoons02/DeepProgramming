#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle();
    ~Circle();
    void setRadius(int r);
    double getArea();
};

Circle::Circle(){
    radius=1;
}

Circle::~Circle(){
    cout << "반지름 " << radius << "원 소멸" << endl;
}

void Circle::setRadius(int r){
    radius = r;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    int n;
    int radius;

    cout << "원 개수 입력 : ";
    cin >> n;

    Circle* p = new Circle[n];
    for (int i=0; i<n; i++){
        cout << "원 " << i << " 반지름 : ";
        cin >> radius;
        p[i].setRadius(radius);
    }

    Circle* pp = p;
    int count = 0;
    for (int i=0; i<n; i++){
        cout << pp->getArea() << " ";
        if ((pp->getArea() >= 100)&&(pp->getArea() <= 200)){
            count++;
        }
        pp++;
    }

    cout << "면적이 100이상 200이하인 원의 개수는 " << count << "개 입니다." << endl;

    delete [] p;
}