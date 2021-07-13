#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (((b + c) > a && a > abs(b - c)) && ((a + c) > b && b > abs(a - c)) && ((a + b) > c && c > abs(a - b)))
    {
        float perimetro = (a + b + c);
        printf("Perimetro = %.1f\n", perimetro);
    }
    else
    {
        float area = (c * (a + b)) / 2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}
