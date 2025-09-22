#include <iostream>
#include <print>
using namespace std;

int main(){

    const int foot_inch = 12;
    // const表示不可变的常量，必须初始化否则之后无法赋值

    int height = 0;
    print("输入身高(英寸):__\b\b");
    cin >> height;

    int foot = height/foot_inch;
    int inch = height%foot_inch;

    print("转换后身高为{}英尺{}英寸\n",foot,inch);

    return 0;

}