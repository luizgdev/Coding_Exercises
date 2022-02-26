#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void matrix_ini(int n, int matrix[n][n]);
void matrix_mod(int n, int matrix[n][n]);
void matrix_print(int n, int matrix[n][n]);

int main()
{
    int n;
    while (scanf("%d", &n) != 0)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            int matrix[n][n];
            matrix_ini(n, matrix);
            if (n > 2)
            {
                matrix_mod(n, matrix);
            }
            matrix_print(n, matrix);
        }
    }

    return 0;
}

void matrix_ini(int n, int matrix[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix[i][j] = 1;
        }
    }
}

void matrix_mod(int n, int matrix[n][n])
{
    int i, j;
    int num = 1;
    int right_diag = n, left_diag = 0;
    double size_matrix = ceil((double)n / 2.0);
    
    do
    {
        num++;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ((i > left_diag && i < right_diag - 1) && (j > left_diag && j < right_diag - 1))
                {
                    matrix[i][j] = num;
                }
            }
        }
        left_diag++;
        right_diag--;
    } while (num < size_matrix);
}

void matrix_print(int n, int matrix[n][n])
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
