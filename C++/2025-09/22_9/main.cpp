#include <iostream>
#include <print>
using namespace std;

int main(){

    const double degree_minutes = 60;
    const double degree_seconds = 3600;

    int degree = 0;
    int minutes = 0;
    int seconds = 0;

    print("Enter a latitude in degree, minutes, and seconds:\n");
    print("First, enter the degree:");
    cin >> degree;
    print("Next, enter the minutes of arc:");
    cin >> minutes;
    print("Finally, enter the seconds of arc:");
    cin >> seconds;

    double degree2 = degree+minutes/degree_minutes+seconds/degree_seconds;

    print("{} degrees, {} minutes, {} seconds = {} degrees.\n",degree,minutes,seconds,degree2);

    return 0;

}