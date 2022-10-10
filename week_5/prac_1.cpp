#include <iostream>
using namespace std;

int main(){
    int len; // 입력 변수 선언

    cout << "정수를 얼마나 입력 받을까요? ";
    cin >> len; // 변수값 입력
    cout << endl;

    int* arr = new int[len]; // len만큼 동적 할당

    for (int i = 0; i < len; i++){ // len만큼 반복
        cout << "정수 입력 : "; 
        cin >> arr[i]; // 각 칸에 값 입력 후 저장
    }
    
    cout << endl << "정수 출력 : ";
    for (int i = 0; i < len; i++){ // len만큼 반복
        cout << arr[i]; // 각 칸에 저장된 값 출력
        if (i != len-1){ // 가장 마지막 숫자가 아니라면
            cout << ", "; // ', '를 입력함
        }
    }
    cout << endl;

    delete[] arr; // 해제
}