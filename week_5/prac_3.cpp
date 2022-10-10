#include <iostream>
#include <string>
using namespace std;

class Books {
private: // private 접근지정자
    int tag; // 책 번호
    string name; // 책 이름
    int price; // 책 가격
public: // public 접근 지정자
    Books(); // 매개변수가 없는 생성자
    Books(int i, string inputName, int inputPrice); // 매개변수가 있는 생성자
    void printAll(); // 출력 함수
};

Books::Books(){ // 매개변수가 없는 생성자 내용
    tag = 0;
    name = "none";
    price = 0;
}

Books::Books(int i, string inputName, int inputPrice){ // 매개변수가 있는 생성자 내용
    name = inputName;
    price = inputPrice;
    tag = i;
}

void Books::printAll(){
    cout << "[책 " << tag << "]" << endl; // 책 번호 출력
    cout << "제목 : " << name << endl; // 책 제목 출력
    cout << "가격 : " << price << endl << endl; // 책 가격 출력
}

int main(){
    int num;
    string inputName;
    int inputPrice;

    cout << "책 개수를 입력해주세요 : ";
    cin >> num; // 책 개수(입력할 개수)

    Books *data[num]; // 포인터형 객체 배열 생성

    for (int i = 1; i <= num; i++){
        cout << "[책 " << i << "번 제목 및 가격 입력]" << endl; // 책 번호 출력
        cout << "제목 : ";
        cin >> inputName; // 책 제목 입력
        cout << "가격 : ";
        cin >> inputPrice; // 책 가격 입력
        cout << endl;
        data[i] = new Books(i, inputName, inputPrice); // 동적 할당
    }
    
    cout << "[책 제목 및 가격 출력]" << endl;
    for (int i = 1; i <= num; i++){
        data[i] -> printAll(); // printAll 접근
    }
}