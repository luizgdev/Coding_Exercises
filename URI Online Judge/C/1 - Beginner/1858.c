#include <stdio.h>
#include <stdlib.h>

void leitura(int *t, int n);
int pos_menor_num(int *t, int n);

int main()
{
    int n;

    scanf("%d", &n);

    int t[n];

    leitura(t, n);

    int res = pos_menor_num(t, n);

    printf("%d\n", res);

    return 0;
}

void leitura(int *t, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
}

int pos_menor_num(int *t, int n)
{
    int i;
    int menor = t[0];
    int pos = 1;

    for (i = 1; i < n; i++)
    {
        if (menor > t[i])
        {
            menor = t[i];
            pos = i + 1;
        }
    }

    return pos;
}
