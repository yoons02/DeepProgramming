#include <iostream>
#include <string>
using namespace std;

class Books {
private:
    int tag;
    string name;
    int price;
public: 
    Books(){
        name = "none";
        price = 0;
    }

    Books(int i, string inputName, int inputPrice){
        name = inputName;
        price = inputPrice;
        tag = i;
    }

    void printAll();
};

void Books::printAll(){
    cout << "[책 " << tag << "]" << endl;
    cout << "제목 : " << name << endl;
    cout << "가격 : " << price << endl << endl;
}

int main(){
    int num;
    string inputName;
    int inputPrice;

    cout << "책 개수를 입력해주세요 : ";
    cin >> num;

    Books *data[num];

    for (int i = 1; i <= num; i++){
        cout << "[책 " << i << "번 제목 및 가격 입력]" << endl;
        cout << "제목 : ";
        cin >> inputName;
        cout << "가격 : ";
        cin >> inputPrice;
        cout << endl;
        data[i] = new Books(i, inputName, inputPrice);
    }
    
    cout << "[책 제목 및 가격 출력]" << endl;
    for (int i = 1; i <= num; i++){
        data[i] -> printAll();
    }
}