#include <stdio.h>
#include <math.h>
int main()
{
    double R;
    double n = 3.14159;
    scanf("%lf", &R);
    R = pow(R, 2.0);
    printf("A=%.4lf\n", (n * R));
    return 0;
}