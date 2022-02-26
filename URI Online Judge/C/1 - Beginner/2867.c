#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned c, n, m;

    scanf("%u", &c);

    while (c--)
    {
        scanf("%u %u", &n, &m);

        printf("%.0f\n", floor(m * log10(n)) + 1);
    }

    return 0;
}