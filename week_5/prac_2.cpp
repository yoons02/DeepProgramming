#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string name;
    string number;
    string check;
public:
    Lecture();
    Lecture(string inName, string inNumber);
    ~Lecture();
    void printAll();
};

Lecture::Lecture(){
    cout << name << " 출석 체크를 시작합니다." << endl;
}

Lecture::Lecture(string inName, string inNumber){
    name = inName;
    number = inNumber;
}

Lecture::~Lecture(){
    cout << name << " 출석 체크가 완료되었습니다." << endl;
}

void Lecture::printAll(){
    cout << "이름 : " << name << endl;
    cout << "학번 : " << number << endl;
    cout << "출결(출석, 지각, 결석) : ";
    cin >> check;
}

int main(){
    int len;
    string inName;
    string inNumber;

    cout << "인원 수 입력 : ";
    cin >> len;
    
    Lecture *arr[len];

    for (int i = 0; i < len; i++){
        arr[i] = new Lecture(inName, inNumber);
        arr[i] -> printAll();
    }
}