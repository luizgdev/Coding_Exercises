#include <iostream>

using namespace std;

#include <iomanip>

typedef struct
{
    unsigned id;
    unsigned horas;
    double percentual;
} funcionario;

int main()
{
    funcionario n;
    double salario;

    cin >> n.id >> n.horas >> n.percentual;

    salario = (n.horas * n.percentual);

    cout << "NUMBER = " << n.id << "\nSALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}