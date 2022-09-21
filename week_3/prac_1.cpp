#include <iostream>
using namespace std;

class YoutubeSize{
private:
    int width;
    int height;
public:
    YoutubeSize();
    YoutubeSize(int, int);
    int GetWidth();
    int GetHeight();
    void ResizeWindow(int, int);
};

YoutubeSize::YoutubeSize() : width(800), height(600) { }
YoutubeSize::YoutubeSize(int w, int h) : YoutubeSize(){
    ResizeWindow(w, h);
}

int YoutubeSize::GetWidth() {
    int w;
    cin >> w;
}

int YoutubeSize::GetHeight() {
    int h;
    cin >> h;
}

void YoutubeSize::ResizeWindow(int w, int h) {
    if (w > 800) width = w;
    else width = w;

    if (h > 800) height = h;
    else height = h;
}

int main(){
    YoutubeSize mainwindow;

    mainwindow.ResizeWindow(234, 1092);
}