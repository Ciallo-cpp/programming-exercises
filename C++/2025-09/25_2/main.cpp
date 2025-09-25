#include <iostream>
#include <print>
#include <cstring>
using namespace std;

int main(){

    char fname[41] = {'\n'};
    print("Enter your first name: ");
    cin.getline(fname,40);

    char lname[41] = {'\n'};
    print("Enter your last name: ");
    cin.getline(lname,40);

    char name[81] = {'\n'};
    strcpy(name,lname);
    strcat(name,", ");
    strcat(name,fname);

    print("Here's the information in a single string: {}\n",name);

    return 0;

}