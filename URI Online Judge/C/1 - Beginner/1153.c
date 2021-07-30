#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int factorial = n;
    for (i = 1; i < n; i++)
        factorial *= i;
    printf("%d\n", factorial);
    return 0;
}