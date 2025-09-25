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
    
    CandyBar snack{"Mocha Munch",2.3,350};

    print("snack的名称为{},重量为{},卡路里含量{}.\n",snack.name,snack.weight,snack.calories);

    return 0;

}