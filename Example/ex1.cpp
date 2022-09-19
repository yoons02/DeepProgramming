#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    cout << "덧셈 문제를 자동으로 출제합니다." << endl;

    while (true){
        int randnum1 = rand()%100;
        int randnum2 = rand()%100;
        int result = randnum1 + randnum2;

        int userResult;

        cout << randnum1 << '+' << randnum2 << '=';
        cin >> userResult;

        if (result == userResult){
            cout << "맞았습니다." << endl;
            break;
        }
        else{
            cout << "틀렸습니다." << endl;
        }
    }
}