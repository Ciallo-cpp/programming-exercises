#include <iostream>
#include <print>
using namespace std;

int main(){

    const int foot_inch = 12;       //1foot=12inch
    const double inch_m = 0.0254;   //1inch=0.0254m
    const double kg_pound = 2.2;    //1kg=2.2pound

    int foot = 0;
    int inch = 0;
    double pound = 0;

    print("输入身高(英尺):");
    cin >> foot;
    print("输入身高(英寸):");
    cin >> inch;
    print("输入体重(磅):");
    cin >> pound;

    double m = (foot*foot_inch+inch)*inch_m;
    double kg = pound/kg_pound;

    print("BMI值为{}\n",kg/m/m);

    return 0;

}