#include <iostream>
#include <print>
using namespace std;

int main(){

    const double km_mile = 0.6214;
    const double gallon_litre = 3.875;

    print("输入耗油量(升/百公里):");
    double oil = 0;
    cin >> oil;

    oil /= 100; //转为升/公里
    oil /= gallon_litre; //转为加仑/公里
    oil /= km_mile; //转为加仑/英里
    oil = 1/oil; //转为英里/加仑

    print("美式油耗为{}(英里/加仑)\n",oil);

    return 0;

}