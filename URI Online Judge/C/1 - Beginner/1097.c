#include <stdio.h>
int main()
{
    int i = 1, j = 7, aux = 0;
    while (i < 10)
    {
        printf("I=%d J=%d\n", i, j);
        aux++;
        j--;
        if (aux == 3)
        {
            i += 2;
            j += 5;
            aux = 0;
        }
    }
    return 0;
}