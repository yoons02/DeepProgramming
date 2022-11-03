#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int carNum;
    string carName;
    int checkNum;
public:
    static void print(int num, string name, int check){
        
        cout << endl << "차량 번호 : " << num << endl;
        cout << "차량 이름 : " << name << endl;
        cout << "표시 : " << check << endl << endl;
    }
};

int main(){
    int n;
    int num;
    string name;
    int check;

    cout << "차량 몇 대를 입력할까요? : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cin.ignore();
        cout << "차량 번호 입력 : ";
        cin >> num;

        cout << "차량 이름 입력 : ";
        cin >> name;

        cout << "표시 (1-10) : ";
        cin >> check;

        Car::print(num, name, check);
    }

}