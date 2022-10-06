#include <iostream>
using namespace std;

int main(){
    int len;

    cout << "정수를 얼마나 입력 받을까요? ";
    cin >> len;
    cout << endl;

    int* arr = new int[len];

    for (int i = 0; i < len; i++){
        cout << "정수 입력 : ";
        cin >> arr[i];
    }

    cout << endl << "정수 출력 : ";
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}