#include <print>
using namespace std;

int main(){

    double Daphne;
    double Cleo;
    int year = 0;

    for (Daphne = 100,Cleo = 100; Daphne >= Cleo; Daphne += 10,Cleo *=1.05)
    {
        year += 1;
    }
    
    print("{}年后,Cleo的投资价值才能超过Daphne的投资价值,Daphne有{},Cleo有{}.\n",year,Daphne,Cleo);

    return 0;

}