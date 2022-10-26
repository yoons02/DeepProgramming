#include <iostream>
#include <string>
using namespace std;

int main(){
    char cstring[100];
    string _string;

    cout << "c-string을 이용한 문자열입니다 : ";
    cin.getline(cstring, 100, '!');

    cin.ignore();
    cout << "string을 이용한 문자열입니다 : ";
    getline(cin, _string);

    cout << endl <<  "c-string : " << cstring << endl;
    cout << "string : " << _string << endl;
}