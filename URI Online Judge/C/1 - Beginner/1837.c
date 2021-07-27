#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    if ((a >= 0 && b > 0) || (a >= 0 && b < 0))
    {
        q = (a / b);
        r = (a % b);
        printf("%d %d\n", q, r);
    }
    else if (a < 0 && b < 0)
    {
        if (abs(a) % abs(b) == 0)
        {
            q = abs(a / b);
            r = 0;
            printf("%d %d\n", q, r);
        }
        else
        {
            q = abs(((a / abs(b))) - 1);
            r = (-q * b) + a;
            printf("%d %d\n", q, r);
        }
    }
    else if (a < 0 && b > 0)
    {
        if (abs(a) % abs(b) == 0)
        {
            q = abs(a / b) * -1;
            r = 0;
            printf("%d %d\n", q, r);
        }
        else
        {
            q = ((a / b) - 1);
            r = (abs(q) * b) + a;
            printf("%d %d\n", q, r);
        }
    }
    return 0;
}