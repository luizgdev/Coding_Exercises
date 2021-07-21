#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int value[n];
    for (i = 0; i < n; i++)
        scanf("%d", &value[i]);
    for (i = 0; i < n; i++)
    {
        if (value[i] > 0 && value[i] % 2 == 0)
            printf("EVEN POSITIVE\n");
        else if (value[i] < 0 && value[i] % 2 == 0)
            printf("EVEN NEGATIVE\n");
        else if (value[i] > 0 && value[i] % 2 != 0)
            printf("ODD POSITIVE\n");
        else if (value[i] < 0 && value[i] % 2 != 0)
            printf("ODD NEGATIVE\n");
        else if (value[i] == 0)
            printf("NULL\n");
    }
    return 0;
}