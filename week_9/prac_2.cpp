#include <iostream>
#include <string>
using namespace std;

class Car{ // Car class 생성
public: // public 접근 지정자
    static int carNum; // carNum int형 정적 변수
    static string carName; // carName string형 정적변수
    static int checkNum; // checkNum int형 정적변수

    Car(); // 기본 생성자
};

Car::Car(){ // Car 기본 생성자 구현
    cout << "객체가 생성되었습니다." << endl; // 출력 메세지
}

// 정적변수 초기화
int Car::carNum = 0000;
string Car::carName = "None";
int Car::checkNum = 1;  

int main(){
    Car car1; // car1 객체 생성

    cout << "차량 번호 입력 : ";
    cin >> Car::carNum; // 차량 번호 입력 후 정적 변수 carNum에 저장

    cout << "차량 이름 입력 : ";
    cin >> Car::carName; // 차량 이름 입력 후 정적 변수 carName에 저장

    cout << "표시 (1-10) : ";
    cin >> Car::checkNum; // 표시 번호 입력 후 정적 변수 checkNum에 저장

    cout << endl << "차량 번호 : " << Car::carNum << endl; // 차량 번호 출력
    cout << "차량 이름 : " << Car::carName << endl; // 차량 이름 출력
    cout << "표시 : " << Car::checkNum << endl << endl; // 표시 번호 출력
}