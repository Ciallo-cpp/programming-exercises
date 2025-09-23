#include <iostream>
#include <print>
using namespace std;

int main(){

    const int day_hour = 24;
    const int hour_minute = 60;
    const int minute_second = 60;

    long long input_second = 0;
    print("Enter the number of seconds:");
    cin >> input_second;

    int day = input_second/day_hour/hour_minute/minute_second;
    int hour = (input_second/hour_minute/minute_second)%day_hour;
    int minute = (input_second/minute_second)%hour_minute;
    int second = input_second%minute_second;

    print("{} seconds = {} days, {} hours, {} minutes, {} seconds.\n",input_second,day,hour,minute,second);

    return 0;

}