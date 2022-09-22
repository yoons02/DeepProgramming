#include <iostream>
#include <string>
using namespace std;

class ChickenSeller {
private:
    int sRemain = 60;
    int sRevenue = 0;
    int bRemain = 80000;
    int bChicken = 0;
public:
    int Calculate(){
        int getChicken;
        cout << "How many chickens are you going to buy? : ";
        cin >> getChicken;
        if (getChicken <= sRemain){
            sRemain = sRemain - getChicken;
            sRevenue = sRevenue + getChicken*18000;

            if (getChicken*18000 <= bRemain){
                bRemain = bRemain - (getChicken*18000);

                cout << "판매자 현항" << endl;
                cout << "남은 치킨 : " << sRemain << endl;
                cout << "판매 수익 : " << sRevenue << endl;
                cout << endl;
                cout << "구매자 현황" << endl;
                cout << "현재 잔액 : " << bRemain << endl;
                cout << "구매 개수 : " << getChicken << endl;
            }
            else {
                cout << "ERROR : " << getChicken*18000-bRemain << " is not enough." << endl;
            }
        }
        else{
            cout << "ERROR : There are only " << sRemain << " chickens left." << endl;
        }
    };
};

int main(){
    ChickenSeller maincacul;
    string type;

    while (true){
        cout << "Select the type(buy or exit) : ";
        cin >> type;
        if (type == "buy"){
            maincacul.Calculate();
        }
        else {
        cout << "Exit calculate system." << endl;
        break;
        }
    }
}