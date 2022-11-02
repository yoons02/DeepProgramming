#include <iostream>
using namespace std;

class measure{
private:
    int radius;
    int width;
    int height;
public:
    measure(); // 기본생성자
    measure(int radius); // 원 면적
    measure(int width, int height); // 직사각형, 정사각형
    measure(double width, int height); // 삼각형
    measure(int radius, double height); // 원뿔 부피
    measure(double radius); // 구 부피
    measure(double radius, double height); // 실린더 부피
};

measure::measure(int radius){
    this -> radius = radius;
    cout << "원의 면적은 " << 3.14*(this->radius)*(this->radius) << endl;
}

measure::measure(int width, int height){
    this -> width = width;
    this -> height = height;
    cout << "사각형의 면적은 " << (this->width)*(this->height) << endl;
}

measure::measure(double width, int height){
    this -> width = width;
    this -> height = height;
    cout << "삼각형의 면적은 " << (this->width)*(this->height)/2 << endl;
}

measure::measure(int radius, double height){
    this -> radius = radius;
    this -> height = height;
    cout << "원뿔의 부피는 " << (1/3)*3.14*(this->radius)*(this->radius)*(this->height) << endl;
}

measure::measure(double radius){
    this -> radius = radius;
    cout << "구의 부피는 " << (4/3)*3.14*(this->radius)*(this->radius)*(this->radius) << endl;
}

measure::measure(double radius, double height){
    this -> radius = radius;
    this -> height = height;
    cout << "실린더의 부피는 " << 3.14*(this->radius)*(this->radius)*(this->height) << endl;
}


int main(){
    int radius;
    double radius_d;
    int width;
    double width_d;
    int height;
    double height_d;
    
    cout << "면적 및 부피 계산기" << endl << endl;

    cout << "1. 원의 면적" << endl;
    cout << "2. 직사각형의 면적" << endl;
    cout << "3. 삼각형의 면적" << endl;
    cout << "4. 정사각형의 면적" << endl;
    cout << "5. 원뿔 부피" << endl;
    cout << "6. 구 부피" << endl;
    cout << "7. 실린터 부피" << endl << endl;

    cout << "입력 : ";
    int num;
    cin >> num;

    if (num == 1){
        cout << "원의 반지름 입력 (int radius): ";
        cin >> radius;
        measure obj(radius);
    }
    else if(num == 2){
        cout << "직사각형 밑변, 높이 입력 (int radius, int height): ";
        cin >> width >> height;
        measure obj(width, height);
    }
    else if(num == 3){
        cout << "삼각형 밑변, 높이 입력 (double width, int height): ";
        cin >> width_d >> height;
        measure obj(width_d, height);
    }
    else if(num == 4){
        cout << "정사각형 한 변의 입력 (int width): ";
        cin >> width;
        measure obj(width, width);
    }
    else if(num == 5){
        cout << "원뿔의 밑반지름, 높이 입력 (int radius, double height): ";
        cin >> radius >> height_d;
        measure obj(radius, height_d);
    }
    else if(num == 6){
        cout << "구의 반지름 입력 (double radius): ";
        cin >> radius_d;
        measure obj(radius_d);
    }
    else if(num == 7){
        cout << "실린더 밑반지름, 높이 입력 (double radius, double height): ";
        cin >> radius_d >> height_d;
        measure obj(radius_d, height_d);
    }
    else {
        cout << "1-7 사이의 숫자를 입력해주세요. 프로그램을 종료합니다.";
    }
}