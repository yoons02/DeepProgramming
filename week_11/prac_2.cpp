#include <iostream>
using namespace std;

class Distance { // Distace 클래스 생성
    int feet; // private 멤버 변수
    int inch; 
public: // public 접근 지정자
    Distance(int feet=0, int inch=0) { // 매개변수의 초기값이 0인 생성자
        this -> feet = feet; // 매개변수 feet을 멤버 변수 feet으로
        this -> inch = inch; // 매개변수 inch를 멤버 변수 inch로
    }
    void show(); // 기존의 feet과 inch를 보여주는 show 함수
    void output(); // 거리의 합 결과를 보여주는 output 함수
    friend Distance operator+(Distance a, Distance b); // 연산자 중복 함수 프렌드 선언
};

void Distance::show() { // show 함수
    cout << feet << " feet, " << inch << " inch" << endl; // feet과 inch 출력
}

void Distance::output(){ // output 함수
    cout << "두 개(d1, d2)의 거리의 합 : " << feet << " feet, " << inch << " inch" << endl; // 합 결과 feet과 inch 출력
}

Distance operator+(Distance a, Distance b) { // 연산자 중복 함수
    Distance tmp; // 임시 객체 생성
    tmp.feet = a.feet + b.feet; // feet 더하기
    tmp.inch = a.inch + b.inch; // inch 더하기
    return tmp; // 임시 객체 리턴
}

int main() {
    Distance a(13,4), b(20,40), c; // a, b, c 객체 생성

    cout << "d1(feet, inch) : ";
    a.show(); // 객체 a의 feet과 inch 출력

    cout << "d2(feet, inch) : ";
    b.show(); // 객체 b의 feet과 inch 출력

    c = a + b; // 연산자 중복 함수 호출
    c.output(); // 객체 c의 feet과 inch 출력
}
