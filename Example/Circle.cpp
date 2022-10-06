#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Circle{
private:
    int x,y,radius;
public:
    Circle();
    Circle(int x, int y, int r);
    void print();
};

Circle::Circle(){
    x = rand()%500;
    y = rand()%300;
    radius = rand()%100;
}

Circle::Circle(int x, int y, int r){
    x = x;
    y = y;
    radius = r;
}

void Circle::print(){
    cout << "반지름 : " << radius << " @(" << x << ", " << y << ")" << endl;
}

int main(){
    int x, y, r;

    srand(time(0));
    Circle arr[10] = {Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(), Circle(),Circle()};

    for (int i = 0; i < 10; i++){
        arr[i].print();
    }
}