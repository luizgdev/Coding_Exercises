#include <iostream>

using namespace std;

#include <iomanip>

int main()
{
    char nome[50];
    double salario, bonus;

    cin >> nome >> salario >> bonus;

    salario += ((bonus * 15) / 100.0);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario << endl;
    
    return 0;
}