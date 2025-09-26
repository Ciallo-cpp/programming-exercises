#include <iostream>
#include <string>
using namespace std;

int main(){

    struct Pizza
    {
        string name;
        double diameter;
        double weight;
    };

    Pizza *pizza = new Pizza;

    cout << "输入披萨直径: ";
    cin >> pizza->diameter;

    cin.get(); //将上一行的回车字符丢弃以确保接下来输入正确 
    cout << "输入披萨名称: ";
    getline(cin,pizza->name);

    cout << "输入披萨重量: ";
    cin >> pizza->weight;

    cout << "输入的名称是" << pizza->name << ".\n直径" << pizza->diameter << ".\n重量" << pizza->weight << "." << endl;

    delete pizza;

    return 0;

}