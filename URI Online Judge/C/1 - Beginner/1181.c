#include <stdio.h>
#define COLUMNS 12
#define LINES 12
int main()
{
    double matrix[LINES][COLUMNS], sum = 0;
    int i, j, l;
    char t;
    scanf("%d %c", &l, &t);
    for (i = 0; i < LINES; i++)
        for (j = 0; j < COLUMNS; j++)
        {
            scanf("%lf", &matrix[i][j]);
            if (i == l)
                sum += matrix[i][j];
        }
    ((t == 'S') ? (printf("%.1lf\n", sum)) : (printf("%.1lf\n", (sum / 12.0))));
    return 0;
}