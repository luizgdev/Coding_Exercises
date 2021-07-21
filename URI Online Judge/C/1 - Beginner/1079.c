#include <stdio.h>
int main()
{
    int n, i, j;
    float number[3];
    scanf("%d", &n);
    float average[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%f", &number[j]);
        number[0] *= 2.0;
        number[1] *= 3.0;
        number[2] *= 5.0;
        average[i] = ((number[0] + number[1] + number[2]) / 10.0);
    }
    for (i = 0; i < n; i++)
        printf("%.1f\n", average[i]);
    return 0;
}