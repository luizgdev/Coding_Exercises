#include <stdio.h>
int main()
{
    int c, i, n;
    scanf("%d", &c);
    int sum[c];
    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        ((n % 2 == 0) ? (sum[i] = 0) : (sum[i] = 1));
    }
    for (i = 0; i < c; i++)
        printf("%d\n", sum[i]);
    return 0;
}