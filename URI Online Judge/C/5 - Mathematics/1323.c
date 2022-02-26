#include <stdio.h>

#define desafio(n) (((((2) * (n)) + (1)) * (((n) * (n)) + (n))) / (6))

int main()
{
    unsigned n;
    
    while (scanf("%u", &n) && n != 0)
    {
        printf("%u\n", desafio(n));
    }

    return 0;
}
