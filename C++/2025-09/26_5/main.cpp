#include <iostream>
#include <print>
#include <array>
using namespace std;

int main(){

    array<double,3> arr;

    print("分别输入三次成绩:\n");

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    print("三次成绩分别为{},{},{}.\n平均成绩为{}\n",arr[0],arr[1],arr[2],(arr[0]+arr[1]+arr[2]/3));

    return 0;
    
}