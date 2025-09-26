#include <iostream>
#include <print>
#include <string>
using namespace std;

int main(){

    string month[12]{"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int sale[12]{};

    for (int i = 0; i < 12; i++)
    {
        print("{}的销量是:",month[i]);
        cin >> sale[i];
    }
    
    int total = 0;
    for (int a = 0; a < 12; a++)
    {
        total += sale[a];
    }
    
    print("本年总销量为{}.\n",total);

    return 0;
    
}