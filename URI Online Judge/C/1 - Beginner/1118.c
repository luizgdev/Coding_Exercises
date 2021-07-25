#include <stdio.h>
int main()
{
    int i, check = 1;
    double score[2], average = 0;
    while (check == 1)
    {
        for (i = 0; i < 2; i++)
            do
            {
                scanf("%lf", &score[i]);
                ((score[i] < 0 || score[i] > 10) ? printf("nota invalida\n") : (average += score[i]));
            } while (score[i] < 0 || score[i] > 10);
        printf("media = %.2lf\n", (average / 2));
        average = 0;
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &check);
        } while (check != 1 && check != 2);
    }
    return 0;
}