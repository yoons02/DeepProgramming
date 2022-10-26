#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    while(true){
        srand(time(NULL));
        int n1 = rand()%100;
        int n2 = rand()%100;
        int answer;
        
        cout  << "덧셈 문제를 자동으로 출제합니다." << endl;
        cout << n1 <<'+'<< n2 << "=";
        cin >> answer;

        if (answer == n1+n2){
            cout << "맞았습니다!" << endl;
            break;
        }
        else{
            cout << "틀렸습니다.." << endl;
        }
    }
}