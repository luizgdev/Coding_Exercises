#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    scanf("%lf", &r);
    double volume = ((4.0 / 3.0) * 3.14159 * pow(r, 3.0));
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}