#include <iostream>
#include <print>
using namespace std;

int main(){

    int a,b;
    print("输入两个整数:\n");
    cin >> a >> b;

    int num = 0;
    while (a >= b)
    {
        num = a+b;
        ++a;
    }
    
    print("{}到{}之间所有整数的和为{}\n",a,b,num);

}