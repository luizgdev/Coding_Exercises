#include <iostream>

using namespace std;

#include <math.h>

#include <iomanip>

#define volume(r) (((4.0) * (3.14159) * (pow((r), (3)))) / (3.0))

int main()
{
    double r;

    cin >> r;

    cout << "VOLUME = " << fixed << setprecision(3) << volume(r) << endl;

    return 0;
}