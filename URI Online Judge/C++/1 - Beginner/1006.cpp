#include <iostream>

using namespace std;

#include <iomanip>

int main()
{
    int i;
    double notas[3], media = 0;

    for (i = 0; i < 3; i++)
    {
        cin >> notas[i];

        if (i == 0)
        {
            notas[i] *= 2;
        }
        else if (i == 1)
        {
            notas[i] *= 3;
        }
        else if (i == 2)
        {
            notas[i] *= 5;
        }

        media += notas[i];
    }

    cout << "MEDIA = " << fixed << setprecision(1) << (media / 10.0) << endl;

    return 0;
}
