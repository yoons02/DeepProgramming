#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Circle{
public:
    int x;
    int y;
    int radius;
    Circle(int _x, int _y, int _r);
    void print();
};

Circle::Circle(int _x, int _y, int _r){
    x = _x;
    y = _y;
    radius = _r;
};

void Circle::print(){
    cout << "반지름 : " << radius << " @(" << x << "," << y << ")" << endl;
}

int main(){
    Circle obj[10] = {Circle(3,4,1), Circle(1,12,6), Circle(4,4,10), Circle(5,10,3), Circle(1,1,1),
    Circle(5,6,7), Circle(12,13,14), Circle(9,10,1), Circle(19,3,2), Circle(13,12,3)};

    // srand(time(NULL));
    // for (int i = 0; i < 10; i++){
    //     obj[i].radius = rand()%100;
    //     obj[i].x = rand()%100;
    //     obj[i].y = rand()%100;
    // }

    for(int i = 0; i < 10; i++){
        obj[i].print();
    }
}