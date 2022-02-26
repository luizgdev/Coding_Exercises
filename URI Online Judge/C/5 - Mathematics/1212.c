#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned **leitura(unsigned **num);
unsigned solve(unsigned **num);

int main()
{
    unsigned **num = (unsigned **)malloc(2 * sizeof(unsigned **));
    unsigned carry;

    while (leitura(num) && (*num[0] != 0 || *num[1] != 0))
    {
        carry = solve(num);

        switch (carry)
        {
        case 0:
            printf("No carry operation.\n");
            break;
        case 1:
            printf("%u carry operation.\n", carry);
            break;
        default:
            printf("%u carry operations.\n", carry);
            break;
        }
    }

    free(num);

    return 0;
}

unsigned **leitura(unsigned **num)
{
    int i;

    for (i = 0; i < 2; i++)
    {
        num[i] = (unsigned *)malloc(10 * sizeof(unsigned *));
        scanf("%u", &(*num[i]));
    }

    return num;
}

unsigned solve(unsigned **num)
{
    int i;
    unsigned tamanhoA = log10(*num[0]) + 1;
    unsigned tamanhoB = log10(*num[1]) + 1;
    unsigned maior;
    unsigned digitoA, digitoB;
    unsigned cont, carry;

    cont = carry = 0;

    (((tamanhoA >= tamanhoB)) ? (maior = tamanhoA) : (maior = tamanhoB));

    for (i = 0; i < maior; i++)
    {
        digitoA = ((*num[0]) % 10);
        digitoB = ((*num[1]) % 10);

        ((digitoA + digitoB + carry >= 10) ? ((cont++), (carry = 1)) : (carry = 0));

        (*num[0]) /= 10;
        (*num[1]) /= 10;
    }

    return cont;
}
