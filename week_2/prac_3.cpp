#include <iostream>
#include <string> // <string> header file 전처리
using namespace std;

int main(){
    string text; // string형 text 변수 선언
    int i, temp, len; // 반복문 제어 변수 i, 문자열 일시 저장 변수 temp, 문자열 길이 변수 len 선언

    cout << "문자열을 입력하세요 : ";
    getline(cin, text); // 문자열을 입력 받아 text 변수에 저장

    len = text.length(); // 반복문에 사용 될 입력 받은 문자열의 길이 계산

    for (i = 0; i < len/2; i++){ // (문자열 길이/2)회 반복
        temp = text[i]; // i번째 index에 저장된 문자를 temp에 저장
        text[i] = text[len-1-i]; // (len-1-i)번째 index에 저장된 문자를 i번째 index에 저장
        text[len-1-i] = temp; // temp에 저장된 문자를 (len-1-i)번째 index에 저장
    }

    cout << "반대로 출력 : ";
    cout << text << endl; // 결과 출력
}