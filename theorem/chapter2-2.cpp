#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char answer[7] = "winner";
    char password[7];

    while(true){
        cout << "비밀번호를 입력하세요 : ";
        cin >> password;

        if (strcmp(password, answer) == 0){
            cout << "잠금이 해제되었습니다!" << endl;
            break;
        }
        else {
            cout << "비밀번호를 다시 입력하세요." << endl;
        }
    }
}