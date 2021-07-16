#include <stdio.h>
int main()
{
    int value_x, value_y, sum = 0;
    scanf("%d %d", &value_x, &value_y);
    if (value_x > value_y)
        while (value_x > value_y)
        {
            value_y++;
            if (value_y % 2 != 0 && value_x > value_y)
                sum += value_y;
        }
    else if (value_x < value_y)
        while (value_x < value_y)
        {
            value_x++;
            if (value_x % 2 != 0 && value_x < value_y)
                sum += value_x;
        }
    printf("%d\n", sum);
    return 0;
}