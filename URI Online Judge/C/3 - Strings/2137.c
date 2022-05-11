#include <stdio.h>
#include <string.h>
#include <math.h>

typedef short unsigned int sui;

void solve(sui n, char codigo[][5]);
void leitura(sui n, char codigo[][5]);
void bubblesort(sui n, char codigo[][5]);
sui converteInt(char *codigo);
void imprime(sui n, char codigo[][5]);

int main()
{
    sui n;

    while (scanf("%hu", &n) != EOF)
    {
        char codigo[n][5];
        solve(n, codigo);
    }

    return 0;
}

void solve(sui n, char codigo[][5])
{
    leitura(n, codigo);

    bubblesort(n, codigo);

    imprime(n, codigo);
}

void leitura(sui n, char codigo[][5])
{
    sui i;

    for (i = 0; i < n; i++)
    {
        scanf("%s", codigo[i]);
    }
}

void bubblesort(sui n, char codigo[][5])
{
    sui i, j;
    char aux[5] = {'\0', '\0', '\0', '\0', '\0'};

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (converteInt(codigo[j]) > converteInt(codigo[j + 1]))
            {
                strcpy(aux, codigo[j]);
                strcpy(codigo[j], codigo[j + 1]);
                strcpy(codigo[j + 1], aux);
            }
        }
    }
}

sui converteInt(char *codigo)
{
    sui i, num = 0;

    for (i = 0; i < 4; i++)
    {
        num += (int)(codigo[i] - 48) * (1000 / pow(10, i));
    }

    return num;
}

void imprime(sui n, char codigo[][5])
{
    sui i;

    for (i = 0; i < n; i++)
    {
        printf("%s\n", codigo[i]);
    }
}