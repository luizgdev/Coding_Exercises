#include <stdio.h>
int main()
{
    int n, i, j, position;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int menor = x[n - 1];
    for (i = 0; i < n; i++)
        if (x[i] < menor)
        {
            menor = x[i];
            position = i;
        }
    printf("Menor valor: %d\nPosicao: %d\n", menor, position);
    return 0;
}