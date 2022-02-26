#include <iostream>

using namespace std;

#include <math.h>

#include <iomanip>

#define triangulo(a, c) (((a) * (c)) / (2.0))
#define circulo(c) ((3.14159) * (pow((c), (2))))
#define trapezio(a, b, c) ((((a) + (b)) / (2.0)) * (c))
#define quadrado(b) ((b) * (b))
#define retangulo(a, b) ((a) * (b))

int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo(a, c) << endl;
    cout << "CIRCULO: " << circulo(c) << endl;
    cout << "TRAPEZIO: " << trapezio(a, b, c) << endl;
    cout << "QUADRADO: " << quadrado(b) << endl;
    cout << "RETANGULO: " << retangulo(a, b) << endl;

    return 0;
}