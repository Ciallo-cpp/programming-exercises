#include <iostream>
#include <print>
using namespace std;

int main(){

    print("输入一些数字,本程序会报告到目前为止,所有输入的累计和,输入0时,程序结束.\n");

    double input;
    double num=0;

    cin >> input;
    while (input != 0)
    {
        num += input;
        print("目前为止,输入的累计和为{}.\n继续输入:",num);
        cin >> input;
    }
    
    print("程序结束。\n");

    return 0;

}