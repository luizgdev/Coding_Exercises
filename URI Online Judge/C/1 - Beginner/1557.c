#include <stdio.h>
#include <stdlib.h>

void mod_matrix(int n, int matrix[n][n]);
int digits_matrix(int n, int matrix[n][n], int i);
void print_matrix(int n, int matrix[n][n]);

int main()
{
    int n;

    while (scanf("%d", &n) != 0)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            printf("%d\n", n);
            printf("\n");
        }
        else
        {
            int matrix[n][n];
            mod_matrix(n, matrix);
            print_matrix(n, matrix);
        }
    }

    return 0;
}

void mod_matrix(int n, int matrix[n][n])
{
    int i, j;
    int tmp = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i >= 0 && j == 0)
            {
                matrix[i][j] = tmp;
            }
            else
            {
                matrix[i][j] = matrix[i][j - 1] * 2;
            }
        }
        tmp *= 2;
    }
}

int digits_matrix(int n, int matrix[n][n], int i)
{
    int cont = 0;
    int num = matrix[n - 1][n - 1];
    while (num > 0)
    {
        num % 10;
        num /= 10;
        cont++;
    }
    return cont;
}

void print_matrix(int n, int matrix[n][n])
{
    int i, j, k;
    int num_digits;
    num_digits = digits_matrix(n, matrix, i);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            (j == 0 ? printf("%*d", num_digits, matrix[i][j]) : printf(" %*d", num_digits, matrix[i][j]));
        }
        printf("\n");
    }
    printf("\n");
}