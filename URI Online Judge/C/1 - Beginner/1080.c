#include <stdio.h>
int main()
{
    int number[100], i, highest = 0, aux;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] > highest)
        {
            highest = number[i];
            aux = i;
        }
    }
    printf("%d\n%d\n", highest, aux);
    return 0;
}