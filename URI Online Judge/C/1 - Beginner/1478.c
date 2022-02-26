#include <stdio.h>
#include <stdlib.h>

void mod_matrix(int n, int matrix[n][n]);
void print_matrix(int n, int matrix[n][n]);

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            printf("%3d\n", n);
            printf("\n");
        }
        else
        {
            int matrix[n][n];
            if (n > 1)
            {
                mod_matrix(n, matrix);
            }
            print_matrix(n, matrix);
        }
    } while (n != 0);

    return 0;
}

void mod_matrix(int n, int matrix[n][n])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 1;
            }
            else if (j > i)
            {
                matrix[i][j] = matrix[i][j - 1] + 1;
            }
            else if (i > j && j == 0)
            {
                matrix[i][j] = i + 1;
            }
            else if (i > j && j != 0)
            {
                matrix[i][j] = matrix[i][j - 1] - 1;
            }
        }
    }
}

void print_matrix(int n, int matrix[n][n])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            (j == 0
                 ? printf("%3d", matrix[i][j])
                 : printf(" %3d", matrix[i][j]));
        }
        printf("\n");
    }
    printf("\n");
}