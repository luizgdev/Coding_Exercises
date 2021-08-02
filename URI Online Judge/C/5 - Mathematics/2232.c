#include <stdio.h>
#include <math.h>
int main()
{
    int t, n, sum, i, j;
    scanf("%d", &t);
    int solve[t];
    for (i = 0; i < t; i++)
    {
        sum = 0;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
            sum += pow(2, j);
        solve[i] = sum;
    }
    for (i = 0; i < t; i++)
        printf("%d\n", solve[i]);
    return 0;
}