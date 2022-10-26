#include <iostream>
#include <cstring>
using namespace std;

class Car{
public:
    char brand[10] = "hyundai";
    int speed = 180;
    int gear = 4;
    char color[10] = "white";
    int speedUp();
    int speedDown();
    void colorTrans();
};

int Car::speedUp(){
    return speed+15;
}

int Car::speedDown(){
    return speed-15;
}

void Car::colorTrans(){
    if(strcmp(color, "black") == 0){
        strcpy(color, "white");
    }
    else{
        strcpy(color, "black");
    }
    cout << color << endl;
}

int main(){
    Car mycar;

    cout << "현재 속도는 " << mycar.speed << ", " ;
    cout << "기어는 " << mycar.gear << ", ";
    cout << "현재 자동차 색상은 " << mycar.color << endl;
    cout << "속도 speedUp() 호출 " << mycar.speedUp() << endl;
    cout << "속도 speedDown() 호출 " << mycar.speedDown() << endl;
    cout << "자동차 색상 변경 colorTrans() 호출 ";
    mycar.colorTrans();
}