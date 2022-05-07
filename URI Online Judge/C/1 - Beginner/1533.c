#include <stdio.h>

void leitura(unsigned short int *v, unsigned short int *aux, unsigned short int n);
void bubblesort(unsigned short int *v, unsigned short int n);
unsigned short int solve(unsigned short int *v, unsigned short int *aux, unsigned short int n);

int main()
{
    short unsigned int n;

    while (scanf("%hu", &n) != 0 && n != 0)
    {
        unsigned short int v[n], aux[n];

        leitura(v, aux, n);

        printf("%hu\n", solve(v, aux, n));
    }

    return 0;
}
void leitura(unsigned short int *v, unsigned short int *aux, unsigned short int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        scanf("%hu", &v[i]);
        aux[i] = v[i];
    }
}

void bubblesort(unsigned short int *v, unsigned short int n)
{
    unsigned short int i, j, aux;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

unsigned short int solve(unsigned short int *v, unsigned short int *aux, unsigned short int n)
{
    bubblesort(v, n);

    unsigned short int i = 0, num = v[n - 2];

    while (aux[i] != num)
    {
        i++;
    }

    return ++i;
}