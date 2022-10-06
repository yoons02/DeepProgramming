#include <iostream>
using namespace std;

class student{
private:
    int num;
public:
    student(){ num = 123456; }
    student(int n){ num = n; }
    void setNum(int n){ num = n; }
    int getNum(){ return num; }
};

int main(){
    student aClass[2][4] = {student(111), student(222), student(333), student(444)};

    aClass[1][0].setNum(55);
    aClass[1][1].setNum(66);
    aClass[1][2].setNum(77);
    aClass[1][3].setNum(88);

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++)
            cout << aClass[i][j].getNum() << endl;
        
    }
}