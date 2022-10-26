#include <iostream>
using namespace std;

int main(){
    int n;
    int sum_odd = 0;
    int sum_even = 0;

    cout << "정수값을 입력하세요 : ";
    cin >> n;

    for (int i=0; i<=n; i++){
        if (i%2!=0){
            sum_odd = sum_odd + i;
        }
    }

    for (int i=0; i<=n; i++){
        if (i%2==0){
            sum_even = sum_even + i;
        }
    }

    cout << "1부터 " << n << "까지의 홀수의 합은 " << sum_odd << endl;
    cout << "1부터 " << n << "까지의 짝수의 합은 " << sum_even << endl;
}