#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float triangulo = (a * c) / 2.0;
    printf("TRIANGULO: %.3f\n", triangulo);
    float circulo = (3.14159 * pow(c, 2.0));
    printf("CIRCULO: %.3f\n", circulo);
    float trapezio = ((a + b) * c) / 2.0;
    printf("TRAPEZIO: %.3f\n", trapezio);
    float quadrado = pow(b, 2.0);
    printf("QUADRADO: %.3f\n", quadrado);
    float retangulo = (a * b);
    printf("RETANGULO: %.3f\n", retangulo);
    return 0;
}