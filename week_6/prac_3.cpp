#include <iostream>
#include <cmath> // pow함수 사용을 위한 라이브러리
using namespace std;

class Sphere{ // Sphere 클래스 생성
private: // private 접근 지정자
    int volume; // 부피 변수
    int i; // 객체 번호 변수
    double pi = 3.14159265358979323846;
public: // public 접근 지정자
    Sphere(int i); // 객체 번호를 매개변수로 갖는 생성자
    int Volume(int radius); // 반지름을 매개변수로 받고 부피를 계산하여 반환하는 함수
    ~Sphere(); // 소멸자
};

Sphere::Sphere(int i){ // 생성자
    this->i = i; // this 포인트
    cout << "구 객체 생성 " << i << endl; // 객체 생성 멘트 출력
}

Sphere::~Sphere(){ // 소멸자
    cout << "구 객체 소멸 " << i << endl; // 객체 소멸 멘트 출력
}

int Sphere::Volume(int radius){ // 부피 계산 및 반환 함수
    volume = (4.0/3.0)*pi*pow(radius,3); // 반지름을 받아 부피 계산
    return volume; // 부피값 반환
}

int main(){
    int count; // 구 개수 변수
    int radius; // 반지름 변수
    int a = 0; // 부피가 765cm3 이상인 구의 개수를 세는 변수
    cout << "구 개수 입력 : ";
    cin >> count; // 구 개수 입력
    cout << endl;

    Sphere *circle[count]; // 포인터형 객체 배열 생성
    
    for (int i = 1; i <= count; i++){
        circle[i] = new Sphere(i); // 동적 할당
    }
    cout << endl;
    for (int i = 1; i <= count; i++){
        cout << "구 " << i << "의 반지름 >> ";
        cin >> radius; // 반지름 입력
        // cout << circle[i] -> Volume(radius) << endl; 
        // 객체 배열을 Volume함수에 접근시켰을 때 계산값이 잘 반환되는지 확인
        if (circle[i] -> Volume(radius) >= 765){ // 부피 반환값이 765보다 크면
            a++; // a를 1 증가시킨다
        }
    }

    cout << endl << "구의 부피가 765cm3 이상인 구는 " << a << "개 입니다." << endl; // 부피가 765cm3 이상인 구 개수 출력
    cout << "구의 부피가 765cm3 미만인 구는 " << count-a << "개 입니다." << endl << endl; // 부피가 765cm3 미만인 구 개수 출력
    
    for (int i = count; i >= 1; i--){
        delete circle[i]; // 객체 소멸
    }
}