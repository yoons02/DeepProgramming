#include <iostream>
using namespace std;

class ChickenSeller {
private:
    int sRemain = 60;
    int sRevenue;
    int bRemain = 80000;
    int bChicken;
public:
    int Calculate(int getChicken, int bRemain){
        if (getChicken <= sRemain){
            sRemain = sRemain - getChicken;
            sRevenue = sRevenue + getChicken*18000;

            if (getChicken*18000 <= bRemain){
                bRemain = bRemain - getChicken*18000;

                cout << sRemain << endl;
                cout << sRevenue << endl;
                cout << bRemain << endl;
                cout << getChicken << endl;
            }
            else {
                cout << "ERROR : " << getChicken*18000-bRemain << " is not enough." << endl;
            }
        }
        else{
            cout << "ERROR : There are only" << sRemain << "chickens left." << endl;
        }
    };
};

int main(){
    ChickenSeller maincacul;

    maincacul.Calculate(3, 54000);
}