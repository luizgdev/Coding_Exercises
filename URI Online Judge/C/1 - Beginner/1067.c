#include <stdio.h>
int main()
{
    int value, odd = 0;
    scanf("%d", &value);
    while (odd < value)
    {
        odd++;
        if (odd % 2 != 0)
            printf("%d\n", odd);
    }
    return 0;
}