#include <iostream>
#include <string>
#include "Student.h" // 사용자 정의 헤더파일 전처리
using namespace std;

void Student::Name(int n){ // 이름을 저장하는 Name 함수
        cout << "이름 : ";
        cin >> name[n]; // n번째 배열에 저장
    }

void Student::Number(int n){ // 학번을 저장하는 Number 함수
    cout << "학번 : ";
    cin >> number[n]; // n번째 배열에 저장
}

void Student::Score(int n){ // 전체 점수를 저장하는 Score 함수
    cout << "전체 점수(0-200) : ";
    cin >> score[n]; // n번째 배열에 저장
    c_score[n] = ((double)score[n]/200)*100;
    cout << endl;
}

void Student::All(int a){ // 전체 정보를 출력하는 All 함수, a는 총 저장된 개수
    cout << "이름 : " <<  name[a] << endl; // 이름 출력
    cout << "학번 : " << number[a] << endl; // 학번 출력
    cout << "전체 점수 : " << score[a] << endl; // 전체 점수 출력
    cout.precision(2);
    cout << "환산 점수 : " << fixed << c_score[a] << endl << endl; // 환산 점수 출력
}

int main(){
    Student db; // 객체 생성
    int work; // 업무 번호 저장 변수

    while (true){ // 무한 loop, break를 만나야 loop에서 빠져나갈 수 있음
        cout << "업무 선택(1:입력 / 2:전체 정보 출력 / 3: 종료) : ";
        cin >> work; // 번호 선택

        if (work == 1){ // 1(입력)을 선택했다면

            cout << "몇 명의 학생 정보를 입력할까요? ";
            cin >> db.n; // 입력할 명 수 입력

            for (int n = 1; n <= db.n; n++){ // 입력한 수 만큼 반복문 실행
                cout << n << "번째 학생 정보를 입력하세요." << endl;
                db.Name(n); // 이름 입력 및 저장
                db.Number(n); // 학번 입력 및 저장
                db.Score(n); // 전체 점수 입력 및 저장
            }
        }
        else if (work == 2){ // 2(전체 정보 출력)을 선택했다면
            cout << "---------------------------------------" << endl;
            cout << "[전체 학생 정보 출력]" << endl;
            db.a = db.a + db.n; // a에 지금까지 입력된 명 수를 저장

            for (int a = 1;  a <= db.a; a++){ // 전체 수 만큼 반복문 실행
                cout << a << "번째 학생 정보를 출력합니다." << endl;
                db.All(a); // 모든 정보 출력
            }
        }
        else if (work == 3) { // 3(종료)을 선택했다면
            cout << "프로그램을 종료합니다." << endl;
            break; // loop 빠져나감
        }
    }
}