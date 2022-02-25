#include <iostream>

using namespace std;

#include <iomanip>

#define media(nota1, nota2) (((((nota1) * (3.5)) + ((nota2) * (7.5))) / (11.0)))

int main()
{
    double nota1, nota2;

    cin >> nota1 >> nota2;

    cout << "MEDIA = " << fixed << setprecision(5) << media(nota1, nota2) << endl;

    return 0;
}