#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    int r1[t], r2[t], solve[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &r1[i], &r2[i]);
        solve[i] = (r1[i] + r2[i]);
    }
    for (i = 0; i < t; i++)
        printf("%d\n", solve[i]);
    return 0;
}