#include <iostream>

using namespace std;

int main()
{
    int unsigned long a, b;

    while (cin >> a >> b)
    {
        cout << (a ^ b) << endl;
    }

    return 0;
}