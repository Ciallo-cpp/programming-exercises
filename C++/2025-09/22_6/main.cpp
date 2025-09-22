#include <iostream>
#include <print>
using namespace std;

void display(int h,int m);

int main(){

    int h = 0;
    print("输入小时:");
    cin >> h;

    int m = 0;
    print("输入分钟:");
    cin >> m;

    display(h,m);

    return 0;

}

void display(int h,int m){

    print("时间是{}时{}分\n",h,m);

}