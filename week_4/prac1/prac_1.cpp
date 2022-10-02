#include <iostream>
#include <iomanip> // 출력 형식 지정 헤더파일
#include "Time.h" // 사용자 정의 헤더파일 전처리
using namespace std;

int Time::transTime(int inHour, int inMinute, int inSecond){ // 매개변수로 입력된 시, 분, 초를 받음
    return inHour*3600 + inMinute*60 + inSecond; // 시, 분, 초를 모두 초로 변환하여 더한 값을 반환
}

int main(){
    Time ts; // 객체 선언

    cout << "시간을 입력해주세요 : " << endl;
    cout << "몇 시? ";
    cin >> ts.inHour; // 시 입력
    cout << "몇 분? ";
    cin >> ts.inMinute; // 분 입력
    cout << "몇 초? ";
    cin >> ts.inSecond; // 초 입력

    cout << "입력한 시간 = ";
    cout << setw(2) << setfill('0') << ts.inHour << ":"; // "시:" 출력, setw로 입력 칸을 지정하고 setfill로 빈 곳은 0으로 채움
    cout << setw(2) << setfill('0') << ts.inMinute << ":"; // "분:" 출력, 위의 방식과 동일
    cout << setw(2) << setfill('0') << ts.inSecond << endl; // "초" 출력

    cout << "시간을 초로 변환 = ";
    cout << ts.transTime(ts.inHour, ts.inMinute, ts.inSecond) << endl; // transTime 함수를 호출하고 시간을 초로 변환하여 출력
}