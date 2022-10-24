#include <iostream>
#include <cstring> // strcpy, strlen 함수 사용을 위한 라이브러리
using namespace std;

class Factory{ // Factory 클래스 생성
private: // private 접근지정자
    int len; // 문자열 길이 변수
    char* name; // 이름 포인터 변수
public: // public 접근지정자
    Factory(const char* name); // 생성자 선언
    Factory(const Factory& m); // 복사 생성자 선언
    ~Factory(); // 소멸자 선언
};

Factory::Factory(const char* name){ // 이름 포인터 변수를 매개변수로 하는 생성자 구현
    len = strlen(name); // name의 길이를 계산하여 len에 저장
    this->name = new char[len+1]; // 문자열 길이+1의 크기를 갖는 char형 배열 메모리를 멤버변수 name에 동적할당
    strcpy(this->name, name); // 멤버변수 name에 매개변수 name을 복사
    cout << "메모리 할당" << endl; // 생성자 실행 메세지
}

Factory::Factory(const Factory& m){ // 객체 m을 매개변수로 하는 복사 생성자 구현
    len = strlen(m.name); // 객체 m에 있는 name의 길이를 구해 len에 저장
    this->name = new char[len+1]; // 문자열 길이+1의 크기를 갖는 char형 배열 메모리를 멤버변수 name에 동적할당
    strcpy(this->name, m.name); // 멤버변수 name에 매개변수 객체 m의 name을 복사
    cout << this->name <<" 1대 생산!!" << endl; // 복사 생성자 실행 메세지 출력
}

Factory::~Factory(){ // 소멸자ㄱ
    cout << "메모리 소멸" << endl; // 소멸자 실행 메세지
}

int main()
{
    
    Factory memory("Apple"); // memory 객체에 Apple이라는 매개변수와 함께 생성
    Factory newMemory(memory); // newMemory에 memory 객체를 복사 생성

    return 0; // 소멸자 호출, newMemory, memory 순서로 소멸
}