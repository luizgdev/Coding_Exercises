#include <stdio.h>
int main()
{
    int value[5], even = 0, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
        if (value[i] % 2 == 0)
            even++;
    }
    printf("%d valores pares\n", even);
    return 0;
}