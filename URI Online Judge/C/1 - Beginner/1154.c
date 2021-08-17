#include <stdio.h>
int main()
{
    double sum = 0, age, aux = 0;
    do
    {
        aux++;
        scanf("%lf", &age);
        ((age >= 0) ? (sum += age) : (aux--));
    } while (age >= 0);
    printf("%.2lf\n", (sum / aux));
    return 0;
}