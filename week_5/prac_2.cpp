#include <iostream>
#include <string>
using namespace std;

class Lecture { // Lecture 클래스 생성
private: // private 접근지정자 지정
    string name; // 이름 변수
    string number; // 학번 변수
    string check; // 출결 변수
public: // public 접근지정자 지정
    Lecture(); // 매개변수가 없는 생성자
    Lecture(string inName, string inNumber, string inCheck); // 매개변수가 있는 생성자
    ~Lecture(); // 소멸자
    void printAll(); // 출결 사항 출력 함수
};

Lecture::Lecture(){ // 매개변수가 없는 생성자 내용
    name = "none";
    number = "none";
    check = "none";
}

Lecture::Lecture(string inName, string inNumber, string inCheck){ // 매개변수가 있는 생성자 내용
    name = inName; // 입력 이름 저장
    number = inNumber; // 입력 학번 저장
    check = inCheck; // 입력 출결 사항 저장
    cout << name << " 출석 체크를 시작합니다." << endl;
}

Lecture::~Lecture(){ // 소멸자 내용
    cout << name << " 출석 체크가 완료되었습니다." << endl;
}

void Lecture::printAll(){ // 출결 사항 출력 함수 내용
    cout << "이름 : " << name << endl; // 이름 출력
    cout << "학번 : " << number << endl; // 학번 출력
    cout << "출결(출석, 지각, 결석) : " << check << endl; // 출결 정보 출력
}

int main(){ 
    string inName; // 이름 입력 변수
    string inNumber; // 학번 입력 변수
    string inCheck; // 출결 정보 입력 변수
    
    Lecture *student1 = new Lecture("유재석", "2022765435", "출석"); // student1 동적할당 및 초기화
    Lecture *student2 = new Lecture("박명수", "2022786542", "무단결석"); // student2 동적할당 및 초기화
    Lecture *student3 = new Lecture("노홍철", "2022098165", "유고결석"); // student3 동적할당 및 초기화

    cout << endl;
    cout << "---------------------------------------"<< endl;
    student1 -> printAll(); // student1, printAll() 출력함수 접근
    student2 -> printAll();// student2, printAll() 출력함수 접근
    student3 -> printAll();// student3, printAll() 출력함수 접근
    cout << "---------------------------------------"<< endl;
    cout << endl;

    delete student1; // student1 동적할당 해제
    delete student2; // student2 동적할당 해제
    delete student3; // student3 동적할당 해제
}