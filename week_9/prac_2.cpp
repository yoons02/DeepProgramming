#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    static int carNum;
    static string carName;
    static int checkNum;   

    Car();
    static void copy(int num, string name, int check);
};

Car::Car(){
    cout << "객체가 생성되었습니다." << endl;
}

void Car::copy(int num, string name, int check){
    carNum = num;
    carName = name;
    checkNum = check;
}

int main(){
    Car car1;

    cout << "차량 번호 입력 : ";
    cin >> Car::carNum;

    cout << "차량 이름 입력 : ";
    cin >> Car::carName;

    cout << "표시 (1-10) : ";
    cin >> Car::checkNum;

    Car::copy(Car::carNum, Car::carName, Car::checkNum);

    cout << endl << "차량 번호 : " << Car::carNum << endl;
    cout << "차량 이름 : " << Car::carName << endl;
    cout << "표시 : " << Car::checkNum << endl << endl;
}