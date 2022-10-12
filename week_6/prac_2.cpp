#include <iostream>
#include <string>
using namespace std;

int main(){
    string str; // string class 선언
    int len; // 문자열 길이 변수

    for(int j = 0; j < 3; j++){
        cout << "문자열 입력 : ";
        getline(cin, str); // 입력 받은 문자열 그대로 str string 변수에 저장
        len = str.length(); // str의 길이를 len에 저장

        for (int i = 0; i < len; i++){ // 문자열 처음 index부터 마지막 index까지
            if ((str[i] >= 65) && (str[i] <= 90)){ // 아스키코드 값이 65 아상 90 이하이면(대문자이면)
                str[i] = tolower(str[i]); // 해당 문자를 소문자로 바꾼다
            }
            else if((str[i] >= 97) && (str[i] <= 122)){ // 아스키코드 값이 97 아상 122 이하이면(대문자이면)
                str[i] = toupper(str[i]); // 해당 문자를 대문자로 바꾼다
            }
        }
        cout << "대소문자 변경 : " << str << endl << endl; // 대소문자 변경 문자열 출력
    }

}