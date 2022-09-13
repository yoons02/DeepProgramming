#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    int studentNumber;
    int date;
    string introduce;
    
    // 정보 입력
    getline(cin, name);
    cin >> studentNumber;
    cin >> date;
    cin.ignore(); 
    getline(cin, introduce);
    
    //10회 출력
    for(int i = 0; i < 10; i++)
    {
        cout << name << studentNumber << date << introduce << endl;
    }
    return 0;
}