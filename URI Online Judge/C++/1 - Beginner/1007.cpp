#include <iostream>

using namespace std;

int main()
{

    int numeros[4], i;

    for (i = 0; i < 4; i++)
    {
        cin >> numeros[i];
    }
    
    cout << "DIFERENCA = " << (numeros[0] * numeros[1] - numeros[2] * numeros[3]) << endl;

    return 0;
}