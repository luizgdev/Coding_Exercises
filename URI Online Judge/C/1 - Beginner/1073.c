#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, aux = 2;
    scanf("%d", &n);
    ((n % 2 == 0) ? n /= 2 : (n /= 2) - 1);
    for (i = 0; i < n; i++)
    {
        printf("%d^2 = %.0lf\n", aux, pow(aux, 2));
        aux += 2;
    }
    return 0;
}