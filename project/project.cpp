#include <iostream>
#include <fstream>
#include <string>
#include "jsoncpp/include/json/json.h"
using namespace std;

int main(){
    Json::Value root;
    Json::Reader reader;
    ifstream json("account.json", ifstream::binary);

    reader.parse(json,root);//json >> root; 두 구문 모두 json을 파싱하는데 사용할 수 있다.

    for(auto& value:root["user"][0])
        cout<<value.asString()<<endl;//string으로 가져오기

    // cout << "안녕하세요. 로그인 하시겠습니까? (1: 예, 2: 아니오)" << endl;
    // int login;
    // cin >> login;

    // if (login==1){
    //     cout << "id : ";
    //     string id;
    //     cin >> id;

    //     cout << "password : ";
    //     string password;
    //     cin >> password;

    //     // json 불러와서 id, password 비교
    // }
    // else if (login==2){
    //     cout << "프로그램을 종료합니다." << endl;
    // }
    // else{
    //     cout << "올바른 숫자를 입력해주세요." << endl;
    // }
}