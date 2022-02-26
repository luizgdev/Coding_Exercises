#include <stdio.h>
#include <stdlib.h>

void mod_matrix(int n, int matrix[n][n]);
void print_matrix(int n, int matrix[n][n]);

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int matrix[n][n];
        mod_matrix(n, matrix);
        print_matrix(n, matrix);
    }
    return 0;
}

void mod_matrix(int n, int matrix[n][n])
{
    int i, j;
    int middle_num = n / 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1;
            }
            else if (i + j == n - 1)
            {
                matrix[i][j] = 2;
            }
            else
            {
                matrix[i][j] = 3;
            }
        }
    }
    if (n % 2 != 0)
    {
        matrix[middle_num][middle_num] = 2;
    }
}

void print_matrix(int n, int matrix[n][n])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}