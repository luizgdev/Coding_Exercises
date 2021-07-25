#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%.0lf %.0lf %.0lf\n", (double)j, pow((double)j, 2), pow((double)j, 3));
        j++;
    }
    return 0;
}