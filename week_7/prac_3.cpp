#include <iostream>
#include <cstring> // strcpy, strlen 함수 사용을 위한 라이브러리
using namespace std;

class Factory{ // Factory 클래스 생성
private: // private 접근지정자
    int len; // 문자열 길이 변수
    char* name; // 이름 포인터 변수
public: // public 접근지정자
    Factory(const char* name); // Factory 생성자
    Factory(const Factory& m);
    ~Factory();
};

Factory::Factory(const char* name){
    len = strlen(name);
    this->name = new char[len+1];
    strcpy(this->name, name);
    cout << "메모리 할당" << endl;
}

Factory::Factory(const Factory& m){
    len = strlen(m.name);
    this->name = new char[len+1];
    strcpy(this->name, m.name);
    cout << this->name <<" 1대 생산!!" << endl;
}

Factory::~Factory(){
    cout << "메모리 소멸" << endl;
}

int main()
{
    Factory memory("lg");
    Factory newMemory(memory);

    return 0;
}