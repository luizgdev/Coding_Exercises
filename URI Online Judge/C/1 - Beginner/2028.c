#include <stdio.h>
#include <math.h>
#define QTD (((int)pow((n + 1), 2) - (n + 1) + 2) / 2)
int main()
{
    int n, i, j, cont = 0;
    while (scanf("%d", &n) != EOF)
    {
        ((n == 0)
             ? (printf("Caso %d: %d numero\n0", ++cont, QTD))
             : (printf("Caso %d: %d numeros\n0", ++cont, QTD)));
        for (i = 1; i <= n; i++)
        {
            if (i == 1)
                printf(" %d", i);
            else if (i > 1)
                for (j = 0; j < i; j++)
                    printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}