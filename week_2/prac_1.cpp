#include <iostream>
using namespace std;

int gcd(int a, int b){ // a와 b를 매개변수로 하는 gcd 함수 선언
    int temp; // 대소비교 후 변수 값을 서로 바꿔주는데 사용될 저장소 temp 변수 선언

    if (a < b){ // a가 b보다 작다면
        temp = a; // a 값을 temp 변수에 일시 저장
        a = b; // b 값을 a에 저장
        b = temp; // a의 값이 담겨있는 temp 값을 b에 저장
    }
    
    int temp2; // 변수 값을 서로 바꿔주는데 사용될 저장소 temp2 변수 선언

    while (b != 0){ // b가 0이 될 때까지 반복
        temp2 = a%b; // a와 b를 나눈 나머지 값을 temp2 변수에 일시 저장
        a = b; // b 값을 a에 저장
        b = temp2; // a의 값이 담겨 있는 temp2 값을 b에 저장
    }
    return a; // 최대공약수 a 반환
}

int main(){
    int a, b; // 입력 변수 선언

    cout << "두 수 입력 : ";
    cin >> a >> b; // 숫자 연달아 입력

    int gcd_result, lcm_result; // 결과값 변수 선언
    gcd_result = gcd(a, b); // gcd 함수를 호출해 계산 후 반환값을 gcd_result에 저장
    lcm_result = (a*b)/gcd_result; // gcd_result를 이용해 lcm_result 계산

    cout << "최대공약수 : " << gcd_result << endl; // 최대공약수 결과값 출력
    cout << "최소공배수 : " << lcm_result << endl; // 최소공배수 결과값 출력
}