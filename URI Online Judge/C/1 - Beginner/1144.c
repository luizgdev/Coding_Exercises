#include <stdio.h>
int main()
{
    int n, i, aux = 1, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, (aux * i), ((aux * i) * i));
        for (j = i; j <= i; j++)
        {
            printf("%d %d %d\n", i, ((aux * i) + 1), (((aux * i) * i) + 1));
        }
        aux++;
    }
    return 0;
}