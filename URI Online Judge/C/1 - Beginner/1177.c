#include <stdio.h>
int main()
{
    int i, t, aux = 0;
    scanf("%d", &t);
    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, aux);
        ((aux <= (t - 2)) ? (aux++) : (aux = 0));
    }
    return 0;
}