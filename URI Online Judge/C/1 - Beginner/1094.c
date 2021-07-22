#include <stdio.h>
int main()
{
    int n, i, total_c = 0, total_r = 0, total_s = 0;
    scanf("%d", &n);
    int amount[n];
    char type[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &amount[i], &type[i]);
        if (type[i] == 'C')
            total_c += amount[i];
        else if (type[i] == 'R')
            total_r += amount[i];
        else if (type[i] == 'S')
            total_s += amount[i];
    }
    int total = (total_c + total_r + total_s);
    double percentual_c = ((double)total_c * (100.0 / total));
    double percentual_r = ((double)total_r * (100.0 / total));
    double percentual_s = ((double)total_s * (100.0 / total));
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", total_c);
    printf("Total de ratos: %d\n", total_r);
    printf("Total de sapos: %d\n", total_s);
    printf("Percentual de coelhos: %.2lf %%\n", percentual_c);
    printf("Percentual de ratos: %.2lf %%\n", percentual_r);
    printf("Percentual de sapos: %.2lf %%\n", percentual_s);
    return 0;
}