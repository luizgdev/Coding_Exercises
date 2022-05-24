#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int speed, time;

    cin >> time >> speed;

    cout << fixed << setprecision(3) << ((float)time * (float)speed) / 12.0 << endl;

    return 0;
}