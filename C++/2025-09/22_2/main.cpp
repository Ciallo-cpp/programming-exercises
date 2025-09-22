#include <iostream>
#include <print>
using namespace std;

int main(){

    int input_long = 0;

    print("输入一个整数long的距离:");
    cin >> input_long;

    print("{}long等于{}码\n\n",input_long,input_long*220);

   int age = 0;

    print ("输入年龄:");
    cin >> age;

    print("该年龄包含{}个月\n",age*12);

    return 0;

}