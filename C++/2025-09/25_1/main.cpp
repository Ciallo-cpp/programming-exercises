#include <iostream>
#include <string>
#include <print>
using namespace std;

int main(){

    string fname;
    print("What is your first name? ");
    getline(cin,fname);

    string lname;
    print("Waht is your last name? ");
    getline(cin,lname);

    char letter;
    print("What letter grade do you deserve? ");
    cin >> letter;

    int age;
    print("What is your age? ");
    cin >> age;

    print("Name: {},{}\nGrade: {}\nAge: {}\n",lname,fname,char(letter+1),age);

    return 0;

}