#include <stdio.h>
int main()
{
    int n, i, aux, aux2, aux3, cont;
    while (scanf("%d", &n) != EOF)
    {
        aux3 = 0;
        cont = n;
        aux = 1;
        if (n % 2 != 0)
        {
            while (aux <= n)
            {
                for (i = 0; i < (cont / 2); i++)
                    printf(" ");
                for (i = 0; i < aux; i++)
                    printf("*");
                printf("\n");
                aux += 2;
                cont -= 2;
            }
            aux -= 2;
            if (aux == n)
            {
                cont = n;
                aux2 = 1;
                while (aux2 <= 3)
                {
                    for (i = 0; i < (cont / 2); i++)
                        printf(" ");
                    if (n == 1)
                    {
                        for (i = 0; i < aux2; i++)
                            printf("*");
                        aux3++;
                        if (aux3 == 1)
                            printf("\n");
                    }
                    else
                    {
                        for (i = 0; i < aux2; i++)
                            printf("*");
                    }
                    printf("\n");
                    aux2 += 2;
                    cont -= 2;
                }
            }
        }
        printf("\n");
    }
    return 0;
}