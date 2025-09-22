#include <print>
using namespace std;

void Three_blind_mice();
void See_how_they_run();
// 前向声明

int main(){

    Three_blind_mice();
    Three_blind_mice();

    See_how_they_run();
    See_how_they_run();

    return 0;
}

void Three_blind_mice(){
    print("Three blind mice\n");
    // void不返回任何东西
}

void See_how_they_run(){
    print("See how they run\n");
}