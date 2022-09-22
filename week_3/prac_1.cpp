#include <iostream>
using namespace std;

class YoutubeSize{ // Youtube class 선언
private: // private 멤버 변수 선언
    int w; // 입력 width
    int h; // 입력 height
    int width; // 최종 width
    int height; // 최종 height
public: // public 멤버 함수 선언
    YoutubeSize();
    YoutubeSize(int, int);
    int GetWidth();
    int GetHeight();
    void ResizeWindow(int, int);
};

YoutubeSize::YoutubeSize() : width(800), height(600) { } // 매개변수가 없는 경우 default
YoutubeSize::YoutubeSize(int w, int h) : YoutubeSize(){ // 매개변수가 있는 경우 ResizeWindow 실행
    ResizeWindow(w, h);
}

int YoutubeSize::GetWidth() {
    return width; // width 값 return
}

int YoutubeSize::GetHeight() {
    return height; // height 값 return
}

void YoutubeSize::ResizeWindow(int w, int h) {
    if (w > 800) width = w; // 입력 받은 width 값이 800보다 크면 입력 받은 값 사용
    else width = 800; // 아니면 default

    if (h > 600) height = h; // 입력 받은 height 값이 600보다 크면 입력 받은 값 사용
    else height = 600; // 아니면 default
}

int main(){ // main function
    YoutubeSize mainwindow;  // 객체 선언

    mainwindow.ResizeWindow(1080, 102); // 멤버 함수 실행
    cout << mainwindow.GetWidth() << " X " << mainwindow.GetHeight() << endl; // 반환 결과 출력

    mainwindow.ResizeWindow(437, 605);
    cout << mainwindow.GetWidth() << " X " << mainwindow.GetHeight() << endl; 

    mainwindow.ResizeWindow(2350, 2050);
    cout << mainwindow.GetWidth() << " X " << mainwindow.GetHeight() << endl; 

    return 0;
}