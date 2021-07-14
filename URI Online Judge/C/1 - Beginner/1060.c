#include <stdio.h>
int main()
{
    double value[6];
    int i, positive = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &value[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (value[i] > 0)
        {
            positive++;
        }
    }
    printf("%d valores positivos\n", positive);
    return 0;
}