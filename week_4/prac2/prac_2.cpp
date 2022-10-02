#include "BankClient.h" // 사용자 정의 헤더파일 전처리
#include <iostream>
using namespace std;

int main(){
    BankClient obj; // obj 객체 생성

    cout << "예금주 입력 : ";
    cin >> obj.client; // 예금주 입력
    cout << "계좌번호 입력 : ";
    cin >> obj.account; // 계좌번호 입력
    obj.remain = 150000; // 잔액 지정

    cout << "예금주 : " << obj.client << endl; // 예금주 출력
    cout << "계좌번호 : " << obj.account << endl; // 계좌번호 출력

    while(true){ // 무한 loop, break를 만나야 loop에서 빠져나갈 수 있음
        cout << "번호 선택 (1:예금 / 2:출금 / 3:잔액 조회 / 4:종료)" << endl;
        cin >> obj.work; // 번호 선택

        if (obj.work == 1){ // 1(예금)을 선택했다면
            cout << "잔액 : " << obj.save(30000) << endl; // save(30000) 실행 후 출력
        }
        else if (obj.work == 2){ // 2(출금)을 선택했다면
            cout << "잔액 : " << obj.out(15000) << endl; // out(15000) 실행 후 출력
        }
        else if (obj.work == 3){ // 3(잔액 조회)을 선택했다면
            cout << "잔액 : " << obj.now() << endl; // now() 실행 후 출력
        }
        else if (obj.work == 4){ // 4(종료)을 선택했다면
            cout << "프로그램을 종료합니다." << endl; // 메세지 출력 후
            break; // loop 빠져나감
        }
    }
}