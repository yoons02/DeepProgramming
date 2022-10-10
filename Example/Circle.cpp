#include <iostream>
#include <cstdlib> // srand, rand 내장 라이브러리
#include <time.h> // 시간이 지나면 seed값이 바뀌도록 하여 난수가 반복되지 않게 함
using namespace std;

class Circle{
private: // 멤버 변수 선언
    int x,y,radius;
public: 
    Circle(); // 매개변수가 없는 생성자
    Circle(int x, int y, int r); // 매개변수가 있는 생성자
    void print(); // 출력 함수 선언
};

Circle::Circle(){
    x = rand()%500; // 0-500까지 난수를 선언하여 x에 저장
    y = rand()%300; // 0-300까지 난수를 선언하여 y에 저장
    radius = rand()%100; // 0-100까지 난수를 선언하여 radius에 저장
}

Circle::Circle(int x, int y, int r){
    x = x; // 입력받은 x값 저장
    y = y; // 입력받은 y값 저장
    radius = r; // 입력받은 radius값 저장
}

void Circle::print(){
    cout << "반지름 : " << radius << " @(" << x << ", " << y << ")" << endl; // radius, x, y 출력
}

int main(){
    int x, y, r;

    srand(time(0)); // seed값을 지정해 같은 난수가 반복되지 않도록 함
    Circle arr[10] = {Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(),Circle()};
    // 객체 배열 초기화

    for (int i = 0; i < 10; i++){
        arr[i].print(); // 10개의 원 정보 반복 출력
    }
}