#include <iostream>
#include <print>
using namespace std;

int main(){

    int select;
    print("选择计量方法:\n1.英里/加仑.\n2.升/百公里\n");
    cin >> select;

    double mileage = 0;
    print("输入里程:");
    cin >> mileage;

    double oil = 0;
    print("输入油耗:");
    cin >> oil = 0;

   if (select == 1)
   {
        print("{}英里每加仑.\n",mileage/oil);
   }else if (select == 2)
   {
        print("百公里{}升.\n",oil/mileage*100);
   }else
   {
        print("输入1或者2.\n");
   }
   
   
   return 0;
    

}