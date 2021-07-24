#include <stdio.h>
int main()
{
    int x, y, i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        (y == 0 ? printf("divisao impossivel\n") : printf("%.1f\n", ((float)x / (float)y)));
    }
    return 0;
}