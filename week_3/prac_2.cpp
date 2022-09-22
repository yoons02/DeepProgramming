#include <iostream>
#include <string>
using namespace std;

class ChickenSeller { // ChickenSeller class 선언
private: // private 멤버 변수 선언 및 초기화
    int sRemain = 60; // 남은 치킨
    int sRevenue = 0; // 판매 수익
    int bRemain = 80000; // 현재 잔액
    int bChicken = 0; // 구매 개수
    int i = 0; // 주문 번호
public: // public 멤버 함수
    int Calculate(){ // Calculate 함수 선언
        cout << "How many chickens are you going to buy? : ";
        cin >> bChicken; // 구매 개수 입력
        if (bChicken <= sRemain){ // 구매 개수 <= 남은 치킨 : 구매 가능
            sRemain = sRemain - bChicken; // main 함수의 반복문이 끝날 때까지 남은 치킨을 누적해서 계산한다
            sRevenue = sRevenue + bChicken*18000; // main 함수의 반복문이 끝날 때까지 판매 수익을 누적해서 계산한다

            if (bChicken*18000 <= bRemain){ // 구매 개수*마리 당 가격 <= 현재 잔액 : 구매 가능
                bRemain = bRemain - (bChicken*18000); // main 함수의 반복문이 끝날 때까지 현재 잔액을 누적해서 계산한다
                i++; // 주문 번호 증가

                cout << endl << "#" << i << endl; // 결과 출력
                cout << "+++++++++++++++++++++++" << endl;
                cout << "판매자 현항" << endl;
                cout << "남은 치킨 : " << sRemain << endl;
                cout << "판매 수익 : " << sRevenue << endl;
                cout << "-----------------------" << endl;
                cout << "구매자 현황" << endl;
                cout << "현재 잔액 : " << bRemain << endl;
                cout << "구매 개수 : " << bChicken << endl;
                cout << "+++++++++++++++++++++++" << endl << endl;
            }
            else { // 구매 개수*마리 당 가격 > 현재 잔액 : 구매 불가능
                cout << "ERROR : " << bChicken*18000-bRemain << " is not enough." << endl;
            }
        }
        else{ // 구매 개수 > 남은 치킨 : 구매 불가능
            cout << "ERROR : There are only " << sRemain << " chickens left." << endl;
        }
    };
};

int main(){ // main 함수 선언
    ChickenSeller maincalcul; // 객체 선언
    string type; // 변수 선언

    while (true){ // 무한 loop
        cout << "Select the type(buy or exit) : ";
        cin >> type; // type(buy or exit) 입력
        if (type == "buy"){ // buy 입력
            maincalcul.Calculate(); // 멤버 함수 실행
        }
        else { // exit(buy를 제외한 모든 값) 입력
        cout << "Exit calculate system." << endl;
        break; // 무한 loop를 빠져나감
        }
    }
}