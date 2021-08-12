#include <stdio.h>
int main()
{
    int n[20], i, aux = 0;
    for (i = 0; i < 20; i++)
        scanf("%d", &n[i]);
    for (i = 19; i >= 0; i--)
    {
        printf("N[%d] = %d\n", aux, n[i]);
        aux++;
    }
    return 0;
}