#include <stdio.h>
#include <stdlib.h>

#define num ((((a) + (b)) * (((b) - (a)) + 1)) / 2)

int main()
{
    unsigned long long a, b;

    scanf("%llu %llu", &a, &b);

    printf("%llu\n", (unsigned long long)num);

    return 0;
}
