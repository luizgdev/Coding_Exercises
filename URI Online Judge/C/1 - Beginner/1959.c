#include <stdio.h>

int main()
{
    unsigned int number, lenght;

    scanf("%u %u", &number, &lenght);

    printf("%u\n", number * lenght);

    return 0;
}