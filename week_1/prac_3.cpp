#include <iostream>
#include <algorithm>

using namespace std;

// Number 클래스 생성
class Number {
public:
    int num;

    bool operator<(const Number &arr) const{ // const : 객체 상태 고정
        if (this->num < arr.num) // 들어온 숫자가 이전 배열의 숫자보다 작다면
            return true; // true를 반환한다. 즉, 작은 값이 우선순위가 된다
    
        return false; // 아니라면 false. 정렬하지 않음
    }
};

int main(void) {
    Number arr[10];  // 객체 생성

    cout << "숫자 10개 입력 : ";
    for (int i = 0; i < 10; i++){
        cin >> arr[i].num; // 값 입력받기
    }

    cout << "데이터 출력 : ";
    for (int i = 0; i < 10; i++) 
    {
        cout << arr[i].num << ' '; 
    }

    cout << endl; 

    sort(arr, arr + 10);

    cout << "오름차순 정렬 :";

    for (int i = 0; i < 10; i++) 
    {
        cout << arr[i].num << " "; // 정렬 후 출력
    }
    
    return 0;
}