#include <stdio.h>
int main()
{
    int value[5], even = 0, odd = 0, positive = 0, negative = 0, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
        if (value[i] % 2 == 0)
            even++;
        else if (value[i] % 2 != 0)
            odd++;
        if (value[i] < 0)
            negative++;
        else if (value[i] > 0)
            positive++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
    return 0;
}