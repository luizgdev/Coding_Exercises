#include <stdio.h>
int main()
{
    double value[6], average = 0;
    int i, positive = 0, aux = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &value[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (value[i] > 0)
        {
            positive++;
            average += value[i];
            aux++;
        }
    }
    average /= aux;
    printf("%d valores positivos\n%.1lf\n", positive, average);
    return 0;
}