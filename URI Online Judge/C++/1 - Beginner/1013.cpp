#include <iostream>

using namespace std;

#define maiorAB(a, b) (((a) + (b) + (abs((a) - (b)))) / (2))

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    
    ((maiorAB(a, b) > maiorAB(b, c))
         ? (cout << maiorAB(a, b) << " eh o maior" << endl)
         : (cout << maiorAB(b, c) << " eh o maior" << endl));

    return 0;
}
