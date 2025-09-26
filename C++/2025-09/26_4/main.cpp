#include <print>
#include <string>
using namespace std;

int main(){

    struct CandyBar
    {
        string name;
        double weight;
        int calories;
    };
    
    CandyBar *arr = new CandyBar[3] {
        {"candy-1",2.3,350},
        {"candy-2",3.5,400},
        {"candy-3",6.1,700}
    };

    for (int i = 0; i < 3; i++)
    {
        print("第{}个名称为{},重量为{},卡路里含量{}.\n",i+1,arr[i].name,arr[i].weight,arr[i].calories);
    }

    delete[] arr;
    
    return 0;

}