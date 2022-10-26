#include <iostream>
using namespace std;

int main(){
    int *p;
    p = new int[5];
    cout << "정수 5개 입력 :";

    for(int i=0; i<5; i++){
        cin >> *(p+i);
    }

    for(int i=0; i<5; i++){
        cout << *(p+i);
    }

    delete [] p;
}