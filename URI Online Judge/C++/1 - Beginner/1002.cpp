#include <iostream>

using namespace std;

#include <iomanip>

#define area(raio) ((3.14159) * ((raio) * (raio)))

int main()
{

    double raio;

    cin >> raio;
    cout << "A=" << fixed << setprecision(4) << area(raio) << endl;

    return 0;
}