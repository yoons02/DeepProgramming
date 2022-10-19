#include <iostream>
using namespace std;

void change(string& a, string &b){ // 문자열 2개를 참조 매개변수로 받고 서로 교환 및 역순배열하는 함수
    string temp; // 문자열 상호 교환 시 임시 저장 문자열 변수
    char tempE; // 역순 배열시 임시 저장 문자열 변수
    int lenA; // 문자열 a의 길이 변수
    int lenB; // 문자열 b의 길이 변수

    temp = b; // b를 temp에 저장
    b = a; // a를 b에 저장
    a = temp; // temp를 a에 저장

    cout << endl << "숫자를 서로 교환하였습니다." << endl; // 상호 교환 완료 메세지

    lenA = a.length(); // 문자열 a의 길이를 구하고 lenA에 저장
    lenB = b.length(); // 문자열 b의 길이를 구하고 lenB에 저장


    if (a[0] == '0'){ // 문자열 a에서 맨 처음 문자가 0이라면
        a[0] = '\0'; // null로 바꿈
    }

    for (int j = 0; j < lenA/2; j++){ // j가 a 문자열 길이의 절반만큼(소수점은 버림) 하나씩 증가하면서 실행
        tempE = a[j]; // 문자열 a의 j번 인덱스에 있는 문자를 tempE에 저장
        a[j] = a[lenA-j-1]; // 데칼코마니처럼 문자열의 가운데 문자를 기준으로 j번 인덱스의 반대편에 있는 문자를 j번 인덱스에 저장
        a[lenA-j-1] = tempE; // tempE에 있는 문자열을 j번 인덱스의 반대편에 있는 문자로 저장
        // ex. 12345
        // 가운데 문자가 3이므로 맨 앞 1은 3을 기준으로 반대에 있는 5와 교환해야함.
        // 맨 앞 숫자인 1을 tempE에 저장하고
        // 5를 1이 담겨있던 인덱스에 저장하고
        // tempE에 있는 문자를 5가 있는 인데스에 저장
    }

    if (b[0] == '0'){ // 문자열 b에서 맨 처음 문자가 0이라면
        b[0] = '\0'; // null로 바꿈
    }

    for (int j = 0; j < lenB/2; j++){ // j가 b 문자열 길이의 절반만큼(소수점은 버림) 하나씩 증가하면서 실행
        tempE = b[j]; // 문자열 a의 j번 인덱스에 있는 문자를 tempE에 저장
        b[j] = b[lenB-j-1]; // 문자열의 가운데 문자를 기준으로 j번 인덱스의 반대편에 있는 문자를 j번 인덱스에 저장
        b[lenB-j-1] = tempE; // tempE에 있는 문자열을 j번 인덱스의 반대편에 있는 문자로 저장
    }

    cout << "숫자를 거꾸로 변경하였습니다." << endl << endl; // 역순배열 완료 메세지

    cout << "민수의 숫자 : " << a << endl; // 바뀐 문자열 출력
    cout << "철수의 숫자 : " << b << endl;
}

int main(){
    string first; // 첫 번째 문자열
    string second; // 두 번째 문자열

    cout << "민수의 숫자 : ";
    cin >> first; // 민수 숫자 입력

    cout << "철수의 숫자 : ";
    cin >> second; // 철수 숫자 입력

    change(first, second); // 두 개의 문자열 first, second를 매개변수로 하여 change함수 호출
}