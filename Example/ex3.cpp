#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    int speed;
    int gear;
    string color;

    int speedUp();
    int speedDown();
    int gearUp();
    int gearDown();
    string colorTrans();
};

int Car::speedUp(){
    return speed+15;
}

int Car::speedDown(){
    return speed-15;
}

int Car::gearUp(){
    return gear+1;
}

int Car::gearDown(){
    return gear-1;
}

string Car::colorTrans(){
    if (color == "Black"){
        color = "Gray";
    }
    else if (color == "Gray"){
        color = "Black";
    }
    return color; 
}

int main(){
    Car rec;
    rec.speed = 180;
    rec.gear = 4;
    rec.color = "Gray";

    cout << "현재 속도는 " << rec.speedUp() << ", 기어는 " << rec.gearUp() << ", 현재 자동차 색상은 " << rec.colorTrans() << endl;
    }