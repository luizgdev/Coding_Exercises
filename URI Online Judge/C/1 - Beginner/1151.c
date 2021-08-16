#include <stdio.h>
int main()
{
    int n, i, x = 0, y = 1;
    scanf("%d", &n);
    printf("%d %d ", x, y);
    for (i = 0; i < (n - 2); i++)
    {
        if (i < (n - 3))
        {
            printf("%d ", (x + y));
            ((i % 2 == 0) ? (x = (x + y)) : (y = (x + y)));
        }
        else if (i < (n - 2))
        {
            printf("%d", (x + y));
            ((i % 2 == 0) ? (x = (x + y)) : (y = (x + y)));
        }
    }
    printf("\n");
    return 0;
}