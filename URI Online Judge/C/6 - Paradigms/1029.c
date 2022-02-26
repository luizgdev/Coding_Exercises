#include <stdio.h>
#include <stdlib.h>

unsigned int calls;

unsigned int fib(unsigned int x);

int main()
{
    unsigned int n, x;

    scanf("%u", &n);

    while (n-- > 0)
    {
        scanf("%u", &x);
        calls = 0;
        printf("fib(%u) = %u calls = %u\n", x, calls - 1, fib(x));
    }

    return 0;
}

unsigned int fib(unsigned int x)
{
    if (x == 0 || x == 1)
    {
        calls++;
        return x;
    }
    else
    {
        calls++;
        return (fib(x - 1) + fib(x - 2));
    }
}
