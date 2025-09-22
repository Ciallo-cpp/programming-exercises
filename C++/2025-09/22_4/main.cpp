#include <print>
#include <iostream>
using namespace std;

double celsiu_to_fahrenit(double celsius);

int main(){

    double celsius = 0;
    print("输入摄氏度温度:");
    cin >> celsius;

    print("{}摄氏度等于{:.2f}华氏度(取两位小数)\n",celsius,celsiu_to_fahrenit(celsius));

    return 0;

}

double celsiu_to_fahrenit(double celsius){

    return celsius*1.8+32.0;

}