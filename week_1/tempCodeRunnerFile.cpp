#include <iostream>
using namespace std;

int main()
{
    int num[10];

    cout << "숫자 10개 입력 : ";
    for (int i = 0; i < 10; i++){
        cin >> num[i];
    }

    cout << "데이터 출력 : ";
    for (int i = 0; i < 10; i++) {
		cout << num[i] << ' ';
	}

    cout << endl;
    cout << "오름차순 정렬 : ";
    for (int i = 0; i < 10; i++){
        int min_index = i;

		// i 기준 다음 index부터 탐색
		for (int j = i + 1; j < 10; j++)
		{
			// min index에 있는 값보다 현재 탐색 값이 더 작으면 min_index를 갱신
			if (num[j] < num[min_index])
				min_index = j;
		}
		// 배열 바꾸기
		swap(num[i], num[min_index]);
    }
    for (int i = 0; i < 10; i++) {
		cout << num[i] << ' ';
	}

    return 0;
}