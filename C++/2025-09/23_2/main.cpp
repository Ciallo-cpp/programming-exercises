#include <iostream>
#include <print>
using namespace std;

int main(){

    long long world = 0;
    long long china = 0;

    print("Enter the world's population:");
    cin >> world;

    print("Enther the population of China");
    cin >> china;

    print("The population of the China is {}% of the world population.\n",static_cast<double>(world)/china);

    return 0;
}