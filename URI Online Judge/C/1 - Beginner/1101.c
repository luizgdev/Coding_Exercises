#include <stdio.h>
int main()
{
    int m, n, sum;
    do
    {
        sum = 0;
        scanf("%d %d", &m, &n);
        if (m < n && (m > 0 && n > 0))
        {
            do
            {
                printf("%d ", m);
                sum += m;
                m++;
            } while (m <= n);
            printf("Sum=%d\n", sum);
        }
        else if (n < m && (m > 0 && n > 0))
        {
            do
            {
                printf("%d ", n);
                sum += n;
                n++;
            } while (n <= m);
            printf("Sum=%d\n", sum);
        }
        else if (m == n && (m > 0 && n > 0))
        {
            sum += m;
            printf("%d Sum=%d\n", m, sum);
        }
    } while (m > 0 && n > 0);
    return 0;
}