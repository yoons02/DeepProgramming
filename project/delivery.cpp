#include <iostream>
#include <string.h>
using namespace std;

class Delivery{ // Delivery 클래스
public: // public 접근지정자
    int sum = 0; // 총 가격
    int menuD; // 메뉴 설명 변수
    int menuC; // 메뉴 선택 변수
    int wayC; // 주문 방법 변수
    string answay; // 주문 방법 저장 변수
    void menuList(); // 메뉴 확인 함수
    void menuDescript(); // 메뉴 설명 함수
    void menuChoose(); // 메뉴 선택 함수
    void wayChoose(); // 주문 방법 선택 함수
};

void Delivery::menuList(){
    cout << "1. 페퍼로니 피자" << endl; // 23,000
    cout << "2. 막국수" << endl; // 12,000
    cout << "3. 후라이드 치킨" << endl; // 18,000
    cout << "4. 양념 치킨" << endl; // 19,000
    cout << "5. 로제 파스타" << endl; // 11,000
    cout << "6. 갈릭 스테이크" << endl << endl; // 23,000
}

void Delivery::menuDescript(){ // 메뉴 설명 함수
    while(true){ // break를 만날 때까지 무한반복
        cout << "상세 설명을 확인할 메뉴를 선택하세요. (뒤로가기 : 0)" << endl;
        cin >> menuD;
        if (menuD==1){
            cout << "---------------- 1. 페퍼로니 피자 ----------------" << endl;
            cout << "진정한 피자매니아는 페퍼로니 피자만 고집한다.\n산뜻한 토마토소스, 그 위에 페퍼로니와 주욱 늘어나는 \n모차렐라 치즈~짭짤한 풍미가 일품인 정통 아메리칸 스타일 피자" << endl;
        }
        else if(menuD==2){
            cout << "------------------- 2. 막국수 -------------------" << endl;
            cout << "품질 좋은 메밀로 향긋한 메밀의 맛을 살려주고,\n 누구나 부담 없이 즐길 수 있도록 비율을 맞춰 쫄깃쫄깃한 \n탄력이 느껴지는 메밀 막국수!" << endl;
        }
        else if(menuD==3){
            cout << "---------------- 3. 후라이드 치킨 ----------------" << endl;
            cout << "특별한 비법으로 2번 튀겨 더 바삭한 식감의 겉바속촉 치킨,\n 남녀노소 누구나 사랑하는 후라이드 치킨 본연의 고소한 풍미" << endl; 
        }
        else if(menuD==4){
            cout << "------------------ 4. 양념 치킨 ------------------" << endl;
            cout << "매콤하면서도 자꾸 생각나는 달콤한 맛! 누구나 사랑할 수 밖에 없는\n 중독성 강한 양념으로 치킨의 본질에 충실한 양념 치킨입니다." << endl;
        }
        else if(menuD==5){
            cout << "----------------- 5. 로제 파스타 ------------------" << endl;
            cout << "진한 크러쉬드 토마토에 부드러운 유크림과 브리, 그라나 파다노\n 두 자연치즈를 더해 고급스럽게 즐기는 로제 파스타의 맛" << endl;
        }
        else if(menuD==6){
            cout << "---------------- 6. 갈릭 스테이크 -----------------" << endl;
            cout << "셰프의 레시피로 조리된 특제 소스와 프리미엄 호주산 청정우를 사용한\n 마늘의 풍미를 가득 담은 갈릭 스테이크" << endl;
        }
        else if(menuD==0){
            cout << "메뉴 보기를 종료합니다." << endl;
            break; // while문 빠져나감
        }
        else{
            cout << "올바른 번호를 입력해주세요." << endl; // 에러메세지
        }
        cout << endl;
    }
}

void Delivery::menuChoose(){ // 메뉴 선택 함수
    while(true){ // break문을 만날 때까지 무한반복
        cout << "주문하실 메뉴를 선택하세요. (뒤로가기 : 0)" << endl;
        cin >> menuC;
        if (menuC==1){
            sum += 23000; // 페퍼로니 피자 가격
        }
        else if(menuC==2){
            sum += 12000; // 막국수 가격
        }
        else if(menuC==3){
            sum += 18000; // 후라이드 치킨 가격
        }
        else if(menuC==4){
            sum += 19000; // 양념 치킨 가격
        }
        else if(menuC==5){
            sum += 11000; // 로제 파스타 가격
        }
        else if(menuC==6){
            sum += 23000; // 갈릭 스테이크 가격
        }
        else if(menuC==0){
            cout << "메뉴 선택을 종료합니다." << endl;
            break; // while문 빠져나감
        }
        else{
            cout << "메뉴를 잘못 선택하셨습니다. 다시 선택해주세요." << endl;
        }
        cout << endl;
    }
}

void Delivery::wayChoose(){ // 주문 방법 선택 함수
    cout << "주문 방법을 선택하세요. (1. 배달 | 2. 포장 | 0. 주문 종료) : ";
    cin >> wayC;
    if (wayC==1){
        cout << "배달 주문을 선택하셨습니다." << endl;
        answay = "배달"; // 배달로 저장
    }
    else if (wayC==2){
        cout << "포장 주문을 선택하셨습니다." << endl;
        answay = "포장"; // 포장으로 저장
    }
    else if (wayC==0){
        cout << "주문을 종료합니다." << endl;
    }
    else{
        cout << "번호를 잘못 선택하셨습니다. 다시 선택해주세요." << endl;
    }
}

int main(){
    Delivery obj; // 객체 생성
    string name, password, cellphone, address, detailAddress;

    cout << "비회원 주문입니다. 정보를 작성해주세요." << endl;

    while (true){ // break 만날 때까지 무한반복
        cout << "이름(두 글자 이상 작성) : ";
        cin >> name; // 이름 작성
        if(name.length() >= 2){ // 이름이 두 글자 이상이면
            break; // while문 빠져나감
        }
        else{ // 아니면
            cout << "두 글자 이상 작성해주세요." << endl; // 다시 작성 
        }
    }

    while(true){ // break 만날 때까지 무한반복
        cout << "주문 비밀번호 6자를 입력해주세요. : ";
        cin >> password; // 비밀번호 입력
        if(password.length() == 6){ // 비밀번호가 6자라면
            break; // while문 빠져나감
        }
        else{ // 아니면
            cout << "주문 비밀번호는 6자입니다. 다시 입력해주세요." << endl; // 에러메세지 출력
        }
    }

    while(true){ // break 만날 때까지 무한반복
        cin.ignore(); // 버퍼 삭제
        cout << "도로명 주소 입력 : ";
        cin >> address; // 주소 입력
        if(address.length() == 0){ // 주소 입력이 안됐다면
            cout << "도로명 주소는 공란이 될 수 없습니다. " << endl; // 에러메세지
        }

        cout << "상세 주소 입력 : ";
        cin >> detailAddress; // 상세 주소 입력
        if(detailAddress.length() == 0){ // 상세 주소 입력이 안됐다면
            cout << "상세 주소는 공란이 될 수 없습니다. " << endl; // 에러메세지
        }
        break;
    }

    while(true){ // break 만날 때까지 무한반복
        cin.ignore();
        cout << "휴대폰 번호 11자를 입력해주세요 : ";
        cin >> cellphone; // 휴대폰 번호 입력
        if(cellphone.length()==11){ // 휴대폰 번호가 11자라면
            break; // while문 빠져나감
        }
    }

    cout << "회원정보가 모두 입력되었습니다. 프로그램을 시작합니다." << endl;

    while(true){ // break 만날 때까지 무한반복
        cout << "아래를 확인하고 번호를 선택하세요. " << endl << endl;
        cout << "1. 회원정보출력" << endl;
        cout << "2. 메뉴 확인" << endl;
        cout << "3. 상세 설명 확인" << endl;
        cout << "4. 메뉴 선택" << endl;
        cout << "5. 주문 방법 선택" << endl;
        cout << "6. 결제" << endl << endl;

        int choose;
        cout << "번호 선택 : ";
        cin >> choose;

        if(choose==1){ // 1번을 선택했다면
            //회원정보 출력
            cout << "이름 : " << name << endl;
            cout << "주소 : " << address << " " << detailAddress << endl;
            cout << "휴대폰 번호 : " << cellphone << endl << endl;
        }
        else if (choose==2){ // 2번을 선택했다면
            obj.menuList(); // menuList 함수 호출
        }
        else if(choose==3){ // 3번을 선택했다면
            obj.menuDescript(); // menuDescript 함수 호출
        }
        else if(choose==4){ // 4번을 선택했다면
            obj.menuChoose(); // menuChoose 함수 호출
        }
        else if(choose==5){ // 5번을 선택했다면
            obj.wayChoose(); // wayChoose 함수 호출
        }
        else if(choose==6){ // 6번을 선택했다면
            // 영수증 출력 
            cout << "결제를 진행합니다." << endl;
            cout << "-------------------------------------------" << endl;
            cout << "이름 : " << name << endl;
            cout << "주소 : " << address << "\n" << detailAddress << endl;
            cout << "휴대폰 번호 : " << cellphone << endl;
            cout << "총 가격 : " << obj.sum << endl;
            cout << "주문 방법 : " << obj.answay << endl;
            cout << "-------------------------------------------" << endl << endl;
            break; // while문 빠져나감
        }
        else{
            cout << "올바른 번호를 선택해주세요." << endl;
        }
    }
}