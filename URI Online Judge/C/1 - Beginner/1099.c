#include <stdio.h>
int odd(int func_x, int func_y)
{
    int func_sum = 0;
    if (func_x > func_y)
    {
        do
        {
            func_y++;
            if (func_y != func_x && func_y % 2 != 0)
                func_sum += func_y;
        } while (func_y < func_x);
        return func_sum;
    }
    else if (func_y > func_x)
    {
        do
        {
            func_x++;
            if (func_x != func_y && func_x % 2 != 0)
                func_sum += func_x;
        } while (func_x < func_y);
        return func_sum;
    }
    else if (func_x == func_y)
        return 0;
}
int main()
{
    int n, i, x, y;
    scanf("%d", &n);
    int sum[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        sum[i] = odd(x, y);
    }
    for (i = 0; i < n; i++)
        printf("%d\n", sum[i]);
    return 0;
}