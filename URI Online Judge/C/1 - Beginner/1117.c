#include <stdio.h>
int main()
{
    int i;
    double score[2], average = 0;
    for (i = 0; i < 2; i++)
    {
        do
        {
            scanf("%lf", &score[i]);
            ((score[i] < 0 || score[i] > 10) ? printf("nota invalida\n") : (average += score[i]));
        } while (score[i] < 0 || score[i] > 10);
    }
    printf("media = %.2lf\n", (average / 2));
    return 0;
}