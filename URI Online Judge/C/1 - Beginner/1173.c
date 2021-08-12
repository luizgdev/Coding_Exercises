#include <stdio.h>
int main()
{
    int n[10], i, v;
    scanf("%d", &v);
    n[0] = v;
    for (i = 0; i < 10; i++)
    {
        if (i > 0)
            n[i] = (n[i - 1] * 2);
    }
    for (i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, n[i]);
    return 0;
}