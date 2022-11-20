#include <iostream>
#include <string.h>
using namespace std;

class Delivery{
    int sum;
    int menuD;
    int menuC;
    int wayC;
    Delivery();
    Delivery(string id);
    void menuList();
    void munuDescript();
    void menuChoose();
    void wayChoose();
    void cost();
};

void Delivery::menuList(){
    cout << "1. 페퍼로니 피자" << endl; // 23,000
    cout << "2. 막국수" << endl; // 12,000
    cout << "3. 후라이드 치킨" << endl; // 18,000
    cout << "4. 양념 치킨" << endl; // 19,000
    cout << "5. 로제 파스타" << endl; // 11,000
    cout << "6. 갈릭 스테이크" << endl; // 23,000
}

void Delivery::munuDescript(){
    cout << "상세 설명을 확인할 메뉴를 선택하세요. (뒤로가기 : 0)" << endl;
    cin >> menuD;
    if (menuD==1){
        cout << "---------- 1. 페퍼로니 피자 ----------" << endl;
        //설명
    }
    else if(menuD==2){
        cout << "------------- 2. 막국수 -------------" << endl;
        //설명
    }
    else if(menuD==3){
        cout << "---------- 3. 후라이드 치킨 ----------" << endl;
        //설명
    }
    else if(menuD==4){
        cout << "------------ 4. 양념 치킨 ------------" << endl;
        //설명
    }
    else if(menuD==5){
        cout << "----------- 5. 로제 파스타 -----------" << endl;
        //설명
    }
    else if(menuD==6){
        cout << "---------- 6. 갈릭 스테이크 ----------" << endl;
        //설명
    }
    else if(menuD==0){
        cout << "메뉴 보기를 종료합니다." << endl;
    }
    else{
        cout << "올바른 번호를 입력해주세요." << endl;
    }
}

void Delivery::menuChoose(){
    while(true){
        cout << "주문하실 메뉴를 선택하세요. (뒤로가기 : 0)" << endl;
        cin >> menuC;
        if (menuC==1){
            sum += 23000;
        }
        else if(menuC==2){
            sum += 12000;
        }
        else if(menuC==3){
            sum += 18000;
        }
        else if(menuC==4){
            sum += 19000;
        }
        else if(menuC==5){
            sum += 11000;
        }
        else if(menuC==6){
            sum += 23000;
        }
        else if(menuC==0){
            break;
        }
        else{
            cout << "메뉴를 잘못 선택하셨습니다. 다시 선택해주세요." << endl;
        }
    }
}

void Delivery::wayChoose(){
    cout << "주문 방법을 선택하세요. (1. 배달 | 2. 포장 | 0. 주문 종료) : ";
    cin >> wayC;
    if (wayC==1){
        cout << "배달 주문을 선택하셨습니다." << endl;
    }
    else if (wayC==2){
        cout << "포장 주문을 선택하셨습니다." << endl;
    }
    else if (wayC==0){
        cout << "주문을 종료합니다." << endl;
    }
    else{
        cout << "번호를 잘못 선택하셨습니다. 다시 선택해주세요." << endl;
    }
}

void Delivery::cost(){

}

// int main(){
//     int login_answer;
//     int signup_answer;
//     string id;
//     string password;

//     cout << "계정이 있으신가요? (1. 예 2. 아니오) : ";
//     cin >> login_answer;

//     if(login_answer==1){
//         cout << "로그인 하세요." << endl;
//         cout << "ID : ";
//         cin >> id;
//         cout << "PASSWORD : ";
//         cin >> password;
//         if(id=="yoons1"||id=="yoons2"||id=="yoons3"){
//             if(password=="passyoons1"||password=="passyoons2"||password=="passyoos3"){
//                 //객체 생성
//             }
//         }
//         else{
//             cout << "아이디 또는 비밀번호를 다시 입력해주세요." << endl;
//         }
//     }
//     else if (login_answer==2){
//         cout << "회원가입을 진행하시겠습니까? (1. 예 2. 아니오) : ";
//         cin >> signup_answer;
//         if(signup_answer==1){
//             //회원가입
//         }
//         else if(login_answer==2){
//             cout << "프로그램을 종료합니다." << endl;
//         }
//         else{
//             cout << "올바른 숫자를 입력해주세요." << endl;
//         }
//     }
//     else{
//         cout << "올바른 숫자를 입력해주세요." << endl;
//     }

// }