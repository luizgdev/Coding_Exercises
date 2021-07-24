#include <stdio.h>
int main()
{
    float i = 0, j = 1, value = 0;
    int aux = 0, aux_2 = 0;
    do
    {
        if (aux_2 == 0)
            printf("I=%.0f J=%.0f\n", i, j);
        else
            printf("I=%.1f J=%.1f\n", i, j);
        aux++;
        if (aux == 3)
        {
            i += 0.2;
            value += 0.2;
            j = value;
            aux = 0;
            aux_2++;
        }
        if (aux_2 == 5)
            aux_2 = 0;
        j++;
    } while (i < 2.2);
    return 0;
}