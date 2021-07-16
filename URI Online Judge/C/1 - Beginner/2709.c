#include <stdio.h>
int prime(int sum)
{
    int i, aux = 0;
    if (sum == 0)
        return 1;
    else
    {
        for (i = 1; i <= sum; i++)
            if (sum % i == 0)
                aux++;
        if (aux > 2)
            return 1;
        else if (aux <= 2)
            return 0;
    }
}
int main()
{
    int sum, n, i, m;
    do
    {
        sum = 0;
        scanf("%d", &m);
        int value[m];
        for (i = 0; i < m; i++)
            scanf("%d", &value[i]);
        scanf("%d", &n);
        if (n >= m)
            sum == 0;
        else
        {
            for (i = 0; i < (m - n); i++)
                sum += value[(m - (n * i)) - 1];
        }
        sum = prime(sum);
        if (sum == 1)
            printf("Bad boy! I’ll hit you.\n");
        else if (sum == 0)
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
    } while (sum == 1);
    return 0;
}