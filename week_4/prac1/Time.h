#pragma once

class Time{ // Time 클래스 생성
public: // 접근 지정자
    int inHour; // 시 입력 값 저장 변수
    int inMinute; // 분 입력 값 저장 변수
    int inSecond; // 초 입력 값 저장 변수
    int transTime(int inHour, int inMinute, int inSecond); // 입력된 시간을 초로 변환하는 함수
}; 