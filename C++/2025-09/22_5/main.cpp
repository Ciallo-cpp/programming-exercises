#include <print>
#include <iostream>
using namespace std;

double light_year_to_astronomical_unit(double light_year);

int main(){

    double light_year = 0;
    print("输入光年值:");
    cin >> light_year;

    print("{}光年等于{}天文单位\n",light_year,light_year_to_astronomical_unit(light_year));

    return 0;

}

double light_year_to_astronomical_unit(double light_year){

    return (light_year*63240);
    
}