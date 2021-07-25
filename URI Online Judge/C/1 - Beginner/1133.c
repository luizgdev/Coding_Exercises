#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        while (x > y)
        {
            y++;
            if (x == y)
                break;
            if ((y % 5 == 2) || (y % 5 == 3))
                printf("%d\n", y);
        }
    }
    else if (x < y)
    {
        while (x < y)
        {
            x++;
            if (x == y)
                break;
            if ((x % 5 == 2) || (x % 5 == 3))
                printf("%d\n", x);
        }
    }
    return 0;
}