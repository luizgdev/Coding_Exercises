#include <stdio.h>
int main()
{
    int value = 0;
    while (value < 100)
    {
        value += 2;
        printf("%d\n", value);
    }
    return 0;
}