#include <stdio.h>
#include <string.h>

void solve(short unsigned int n, char texto[][51]);
void leitura(short unsigned int n, char texto[][51]);
short unsigned int tamanhoMaiorString(short unsigned int n, char texto[][51]);
void imprimirTexto(short unsigned int n, char texto[][51], short unsigned int maior);

int main()
{
    short unsigned int n;
    int x = 0;

    do
    {
        scanf("%hu", &n);
        if (n != 0)
        {
            (x == 0 ? x = 1 : printf("\n"));

            char texto[n][51];

            solve(n, texto);
        }
    } while (n != 0);

    return 0;
}

void solve(short unsigned int n, char texto[][51])
{
    short unsigned int maior;

    leitura(n, texto);

    maior = tamanhoMaiorString(n, texto);

    imprimirTexto(n, texto, maior);
}

void leitura(short unsigned int n, char texto[][51])
{
    short unsigned int i;

    for (i = 0; i < n; i++)
    {
        scanf("%s", texto[i]);
    }
}

short unsigned int tamanhoMaiorString(short unsigned int n, char texto[][51])
{
    short unsigned int i, maior;

    maior = strlen(texto[0]);

    for (i = 1; i < n; i++)
    {
        if (maior < strlen(texto[i]))
        {
            maior = strlen(texto[i]);
        }
    }

    return maior;
}

void imprimirTexto(short unsigned int n, char texto[][51], short unsigned int maior)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = strlen(texto[i]); j < maior; j++)
        {
            printf(" ");
        }
        printf("%s\n", texto[i]);
    }
}