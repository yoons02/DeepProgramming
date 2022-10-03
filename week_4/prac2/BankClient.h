#pragma once
#include <string>
#include <iostream>
using namespace std;

class BankClient { // BankClient 클래스 생성
public: // 접근 지정자
    string client; // 예금주 입력 값 저장 변수
    string account; // 계좌변호 입력 값 저장  변수
    int work; // 업무 선택번호 저장 변수
    int remain; // 잔액 저장 변수

    BankClient(){
        cout << "객체가 생성 되었습니다." << endl; // 생성자
    }

    ~BankClient(){
        cout << "객체가 소멸되었습니다." << endl; // 소멸자
    }

    int now(){ // 현재 잔액을 확인하는 now 함수
        return remain; // 그대로 remain return
    }

    int save(int saveM){ // 예금 함수
        remain = remain + saveM; // remain에 매개변수로 받은 savaM을 더함
        return remain; // 값 return
    }

    int out(int outM){ // 출금 함수
        remain = remain - outM; // remain에 매개변수로 받은 outM을 뺌
        return remain; // 값 return
    }
};