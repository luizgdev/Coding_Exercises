#include <stdio.h>
int main()
{
    int valor, i = 0, num = 0;
    int C = 0, L = 0, XX = 0, X = 0, V = 0, II = 0, I = 0;
    scanf("%d", &valor);
    printf("%d\n", valor);
    while (i < 3)
    {
        num = valor % 10;
        i++;
        if (i == 1)
        {
            if (num == 1)
                I = 1;
            else if (num == 2)
                II = 1;
            else if (num == 3)
            {
                I = 1;
                II = 1;
            }
            else if (num == 4)
                II = 2;
            else if (num == 5)
                V = 1;
            else if (num == 6)
            {
                V = 1;
                I = 1;
            }
            else if (num == 7)
            {
                V = 1;
                II = 1;
            }
            else if (num == 8)
            {
                V = 1;
                II = 1;
                I = 1;
            }
            else if (num == 9)
            {
                V = 1;
                II = 2;
            }
        }
        else if (i == 2)
        {
            if (num == 1)
                X = 1;
            else if (num == 2)
                XX = 1;
            else if (num == 3)
            {
                X = 1;
                XX = 1;
            }
            else if (num == 4)
                XX = 2;
            else if (num == 5)
                L = 1;
            else if (num == 6)
            {
                L = 1;
                X = 1;
            }
            else if (num == 7)
            {
                L = 1;
                XX = 1;
            }
            else if (num == 8)
            {
                L = 1;
                XX = 1;
                X = 1;
            }
            else if (num == 9)
            {
                L = 1;
                XX = 2;
            }
        }
        else if (i == 3)
            C = valor;
        valor /= 10;
    }
    printf("%d nota(s) de R$ 100,00\n", C);
    printf("%d nota(s) de R$ 50,00\n", L);
    printf("%d nota(s) de R$ 20,00\n", XX);
    printf("%d nota(s) de R$ 10,00\n", X);
    printf("%d nota(s) de R$ 5,00\n", V);
    printf("%d nota(s) de R$ 2,00\n", II);
    printf("%d nota(s) de R$ 1,00\n", I);
    return 0;
}