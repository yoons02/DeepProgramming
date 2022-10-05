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
    double c_score[30]; // 환산 점수 저장 배열

    void Name(int n);
    void Number(int n);
    void Score(int n);
    void All(int a);
};
