#include <stdio.h>
#include <stdlib.h>

#define capitao(n) ((((int)n[i][0]) + (1)) / (2))

void leitura(unsigned **n, unsigned t);
void organizaDados(unsigned **n, unsigned t);
void printDados(unsigned **n, unsigned t);

int main()
{
    unsigned t, **n;

    scanf("%u", &t);

    n = (unsigned **)malloc(t * sizeof(unsigned **));

    leitura(n, t);
    organizaDados(n, t);
    printDados(n, t);

    return 0;
}

void leitura(unsigned **n, unsigned t)
{
    unsigned i, j, aux;

    for (i = 0; i < t; i++)
    {
        scanf("%d", &aux);
        n[i] = (unsigned *)malloc((aux * sizeof(unsigned *)) + 1);
        n[i][0] = aux;
        for (j = 1; j <= aux; j++)
        {
            scanf("%u", &n[i][j]);
        }
    }
}

void organizaDados(unsigned **n, unsigned t)
{
    unsigned i, j, aux, tmp;

    for (i = 0; i < t; i++)
    {
        aux = n[i][0];
        for (j = 1; j < aux; j++)
        {
            if (n[i][j] > n[i][j + 1])
            {
                tmp = n[i][j];
                n[i][j] = n[i][j + 1];
                n[i][j + 1] = tmp;
                j = 0;
            }
        }
    }
}

void printDados(unsigned **n, unsigned t)
{
    unsigned i;

    for (i = 0; i < t; i++)
    {
        printf("Case %d: %d\n", i + 1, n[i][capitao(n)]);
    }
}
