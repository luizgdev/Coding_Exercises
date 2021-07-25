#include <stdio.h>
int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        while (x >= y)
        {
            if (y % 13 != 0)
                sum += y;
            y++;
        }
    }
    else if (x < y)
    {
        while (x <= y)
        {
            if (x % 13 != 0)
                sum += x;
            x++;
        }
    }
    else if (x == y)
        if (x % 13 != 0)
            sum += x;
    printf("%d\n", sum);
    return 0;
}