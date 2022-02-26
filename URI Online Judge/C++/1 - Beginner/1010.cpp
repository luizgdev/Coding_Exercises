#include <iostream>

using namespace std;

#include <iomanip>

#define total(a, b) (((a.quantity) * (a.price)) + ((b.quantity) * (b.price)))

typedef struct
{
    unsigned short code;
    unsigned int quantity;
    double price;
} product;

int main()
{
    product a, b;

    cin >> a.code >> a.quantity >> a.price;
    cin >> b.code >> b.quantity >> b.price;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (total(a, b)) << endl;

    return 0;
}