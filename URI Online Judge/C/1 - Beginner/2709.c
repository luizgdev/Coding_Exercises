#include <stdio.h>
#define POSITION ((m - (n * i)) - 1)
int prime(int sum)
{
    int i;
    if (sum == 2)
        return 1;
    if (sum % 2 == 0)
        return 0;
    for (i = 3; i * i <= sum; i += 2)
        if (sum % i == 0)
            return 0;
    return 1;
}
int main()
{
    int sum, n, i, m;
    while (scanf("%d", &m) != EOF)
    {
        sum = 0;
        int value[m];
        for (i = 0; i < m; i++)
            scanf("%d", &value[i]);
        scanf("%d", &n);
        if (n >= m)
            sum == 0;
        else
            for (i = 0; i < (m - n); i++)
                if (POSITION >= 0)
                    sum += value[POSITION];
        sum = prime(sum);
        ((sum == 0) ? (printf("Bad boy! I’ll hit you.\n")) : (printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n")));
    }
    return 0;
}