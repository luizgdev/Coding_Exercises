#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double media = ((a * 2.0) + (b * 3.0) + (c * 5.0)) / 10.0;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}