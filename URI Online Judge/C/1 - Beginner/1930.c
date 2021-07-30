#include <stdio.h>

int main()
{
    int t[4], i, sum = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &t[i]);
        sum += t[i];
    }
    printf("%d\n", (sum - 3));
    return 0;
}