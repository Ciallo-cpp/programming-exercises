#include <iostream>
#include <print>
#include <string>
using namespace std;

int main(){

    string fname;
    print("Enter your first name: ");
    getline(cin,fname);

    string lname;
    print("Enter your last name: ");
    getline(cin,lname);

    string name;
    name = lname + ", " + fname;
    print("Here's the information in a single string: {}\n",name);

    return 0;

}