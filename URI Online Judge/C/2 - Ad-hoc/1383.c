#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void solve(unsigned int n, bool *resultados);
unsigned int **leituraMatriz(unsigned int **matriz);
bool verificaMatrizSolucao(unsigned int **matriz);
bool verificaLinha(unsigned int **matriz, unsigned int i, unsigned int j);
bool verificaColuna(unsigned int **matriz, unsigned int i, unsigned int j);
bool verificaSubmatriz(unsigned int **matriz, unsigned int i, unsigned int j);
void imprimeResultados(unsigned int n, bool *resultados);

int main()
{
    unsigned int n;

    scanf("%d", &n);

    bool *resultados = (bool *)malloc(n * sizeof(bool *));

    solve(n, resultados);

    imprimeResultados(n, resultados);

    free(resultados);

    return 0;
}

void solve(unsigned int n, bool *resultados)
{
    if (n > 0)
    {
        unsigned int **matriz = leituraMatriz(matriz);

        *resultados++ = verificaMatrizSolucao(matriz);

        free(matriz);

        solve(--n, resultados);
    }
}

unsigned int **leituraMatriz(unsigned int **matriz)
{
    unsigned int i, j;

    matriz = (unsigned int **)malloc(9 * sizeof(unsigned int **));

    for (i = 0; i < 9; i++)
    {
        matriz[i] = (unsigned int *)malloc(9 * sizeof(unsigned int *));
        for (j = 0; j < 9; j++)
        {
            scanf("%u", &matriz[i][j]);
        }
    }

    return matriz;
}

bool verificaMatrizSolucao(unsigned int **matriz)
{
    unsigned int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (verificaLinha(matriz, i, j) == false || verificaColuna(matriz, i, j) == false || verificaSubmatriz(matriz, i, j) == false)
            {
                return false;
            }
        }
    }

    return true;
}
bool verificaLinha(unsigned int **matriz, unsigned int i, unsigned int j)
{
    unsigned int num = matriz[i][j], aux = j;

    for (j = 0; j < 9; j++)
    {
        if (j != aux)
        {
            if (matriz[i][j] == num)
            {
                return false;
            }
        }
    }

    return true;
}
bool verificaColuna(unsigned int **matriz, unsigned int i, unsigned int j)
{
    unsigned int num = matriz[i][j], aux = i;

    for (i = 0; i < 9; i++)
    {
        if (i != aux)
        {
            if (matriz[i][j] == num)
            {
                return false;
            }
        }
    }

    return true;
}
bool verificaSubmatriz(unsigned int **matriz, unsigned int i, unsigned int j)
{
    unsigned int num = matriz[i][j];
    unsigned int minimoI, minimoJ, limiteI, limiteJ, posicaoOriginalI = i, posicaoOriginalJ = j;

    if ((i >= 0 && i <= 2) && (j >= 0 && j <= 2))
    {
        minimoI = minimoJ = 0;
        limiteI = limiteJ = 3;
    }
    else if ((i >= 3 && i <= 5) && (j >= 0 && j <= 2))
    {
        minimoI = 3;
        minimoJ = 0;
        limiteI = 6;
        limiteJ = 3;
    }
    else if ((i >= 6 && i <= 8) && (j >= 0 && j <= 2))
    {
        minimoI = 6;
        minimoJ = 0;
        limiteI = 9;
        limiteJ = 3;
    }
    else if ((i >= 0 && i <= 2) && (j >= 3 && j <= 5))
    {
        minimoI = 0;
        minimoJ = 3;
        limiteI = 3;
        limiteJ = 6;
    }
    else if ((i >= 3 && i <= 5) && (j >= 3 && j <= 5))
    {
        minimoI = minimoJ = 3;
        limiteI = 6;
        limiteJ = 6;
    }
    else if ((i >= 6 && i <= 8) && (j >= 3 && j <= 5))
    {
        minimoI = 6;
        minimoJ = 3;
        limiteI = 9;
        limiteJ = 6;
    }
    else if ((i >= 0 && i <= 2) && (j >= 6 && j <= 8))
    {
        minimoI = 0;
        minimoJ = 6;
        limiteI = 3;
        limiteJ = 9;
    }
    else if ((i >= 3 && i <= 5) && (j >= 6 && j <= 8))
    {
        minimoI = 3;
        minimoJ = 6;
        limiteI = 6;
        limiteJ = 9;
    }
    else if ((i >= 6 && i <= 8) && (j >= 6 && j <= 8))
    {
        minimoI = minimoJ = 6;
        limiteI = limiteJ = 9;
    }

    for (i = minimoI; i < limiteI; i++)
    {
        for (j = minimoJ; j < limiteJ; j++)
        {
            if (num == matriz[i][j] && (i != posicaoOriginalI && j != posicaoOriginalJ))
            {
                return false;
            }
        }
    }

    return true;
}
void imprimeResultados(unsigned int n, bool *resultados)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        ((resultados[i] == true) ? (printf("Instancia %d\nSIM\n", (i + 1))) : (printf("Instancia %d\nNAO\n", (i + 1))));
        printf("\n");
    }
}