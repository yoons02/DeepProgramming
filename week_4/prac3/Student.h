#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student { // Student 클래스 생성
public: // 접근 지정자
    int n; // 정보 순서를 위한 변수 선언 1
    int a; // 정보 순서를 위한 변수 선언 2
    string name[30]; // 이름 저장 배열
    string number[30]; // 학번 저장 배열
    int score[30]; // 점수 저장 배열
    int c_score[30]; // 환산 점수 저장 배열

    void Name(int n){ // 이름을 저장하는 Name 함수
        cout << "이름 : ";
        cin >> name[n]; // n번째 배열에 저장
    }

    void Number(int n){ // 학번을 저장하는 Number 함수
        cout << "학번 : ";
        cin >> number[n]; // n번째 배열에 저장
    }

    void Score(int n){ // 전체 점수를 저장하는 Score 함수
        cout << "전체 점수(0-200) : ";
        cin >> score[n]; // n번째 배열에 저장
        c_score[n] = (score[n]/200)*100; // 100점 만점으로 환산점수 계산 후 n번째 배열에 저장
    }

    void All(int a){ // 전체 정보를 출력하는 All 함수, a는 총 저장된 개수
        cout << "이름 : " << name[a] << endl; // 이름 출력
        cout << "학번 : " << number[a] << endl; // 학번 출력
        cout << "전체 점수 : " << score[a] << endl; // 전체 점수 출력
        cout << "환산 점수 : " << c_score[a] << endl; // 환산 점수 출력
    }
};
