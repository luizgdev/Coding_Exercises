#include <stdio.h>
int main()
{
    int x, y, sum;
    do
    {
        scanf("%d %d", &x, &y);
        if (x > y)
            printf("Decrescente\n");
        else if (x < y)
            printf("Crescente\n");
    } while (x != y);
    return 0;
}