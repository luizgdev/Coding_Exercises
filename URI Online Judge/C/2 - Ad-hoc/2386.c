#include <stdio.h>
int main()
{
    int a, n, i, total = 0;
    scanf("%d %d", &a, &n);
    int f[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
        if (a * f[i] >= 40000000)
            total++;
    }
    printf("%d\n", total);
    return 0;
}