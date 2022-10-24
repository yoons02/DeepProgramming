#include <iostream>
using namespace std;

void Before(float* defaultV){ // 항구 진입 전 선박 속도 계산 함수
    float resultBefore = *defaultV/3000; // 매개변수로 받은 값을 3,000으로 나눔
    cout << "선박 속도(항구 진입 전) : " << resultBefore << " km/s" << endl; // 항구 진입 전 선박 속도 계산 결과 출력
}

void After(float* defaultV){ // 항구 진입 후 선박 속도 계산 함수
    float resultAfter = (*defaultV-10000)/3000; // 매개변수로 받은 값에서 10,000을 뺴고 3,000으로 나눔
    cout << "선박 속도(항구 진입 후) : " << resultAfter << " km/s" << endl; // 항구 진입 후 선박 속도 계산 결과 출력
}

int main(){
    float defaultV = 17000; // 기본 속도는

    Before(&defaultV); // Before 함수에 default의 주소값 전달
    After(&defaultV); // After 함수에 default의 주소값 전달
}