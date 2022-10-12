#include <iostream>
#include <string>
using namespace std;

int main(){
    string str; // string class 변수 선언
    int len; // 문자열 길이 변수

    cout << "문자열 입력 : "; 

    getline(cin, str); // 입력 받은 문자열 그대로 str string 변수에 저장
    len = str.length(); // str의 길이를 len에 저장

    cout << "원본 문자열 : " << str << endl; // 원본 문자열 출력
    cout << "역순 문자열 : ";
    for (int i = len-1; i >= 0; i--){ // 역순, 문자열의 마지막 index는 len-1, 처음 index는 0이다.
        cout << str[i]; // str의 마지막(str[len-1])문자부터 처음(str[0])까지 출력
    }
    cout << endl;
}