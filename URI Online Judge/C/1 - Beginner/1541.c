#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    while (scanf("%d", &a) != 0)
    {
        if (a == 0)
        {
            return 0;
        }
        else
        {
            scanf("%d", &b);
            scanf("%d", &c);
            int area = (a * b);
            int total_area = ((area * 100) / c);
            int land_size = sqrt(total_area);
            printf("%d\n", land_size);
        }
    }

    return 0;
}