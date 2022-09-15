#include <iostream>
using namespace std;

int main(){
    int i = 0, a, b, result; // 변수 선언
    char opt; // 연산자를 저장할 char형 변수 선언

    while (i < 8){ // n회 반복
        cin >> a >> opt >> b; // 숫자 a, 연산자 opt, 숫자 b를 순서대로 입력. 구분은 spacebar

        if (opt == '+'){ // 연산자가 '+'라면
            result = a + b; // a + b 값을 result에 저장
        }
        else if (opt == '-'){ // 연산자가 '+'라면
            result = a - b; // a - b 값을 result에 저장
        }
        else if (opt == '*'){ // 연산자가 '+'라면
            result = a * b; // a * b 값을 result에 저장
        }
        else if (opt == '/'){ // 연산자가 '+'라면
            result = a / b; // a / b 값을 result에 저장
        }
        else if (opt == '%'){ // 연산자가 '+'라면
            result = a % b; // a % b 값을 result에 저장
        }
        else { // opt에 다른 문자가 입력된다면
            cout << "ERROR : Operator disabled. End a loop." << endl; // 에러메세지 출력
            break; // 반복 종료
        }
        cout << a << ' ' <<  opt << ' ' <<  b << " = " << result << endl; // 'a ? b = c' 형식으로 결과 출력
        i++; // 반복 1회 당 i를 +1
    }
}