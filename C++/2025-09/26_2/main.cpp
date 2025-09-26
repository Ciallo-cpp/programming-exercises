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
    
    Pizza pizza;

    cout << "输入披萨名称: ";
    getline(cin,pizza.name);

    cout << "输入披萨直径: ";
    cin >> pizza.diameter;

    cout << "输入披萨重量: ";
    cin >> pizza.weight;

    cout << "输入的名称是" << pizza.name << ".\n直径" << pizza.diameter << ".\n重量" << pizza.weight << "." << endl;

    return 0;

}