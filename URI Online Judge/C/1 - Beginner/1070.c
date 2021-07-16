#include <stdio.h>
int main()
{
    int value, odd = 0;
    scanf("%d", &value);
    if (value % 2 == 0)
        while (odd < 12)
        {
            odd++;
            if (odd % 2 != 0)
                printf("%d\n", (odd + value));
        }
    else
    {
        printf("%d\n", value);
        while (odd < 10)
        {
            odd++;
            if (odd % 2 != 0)
                printf("%d\n", (odd + value + 1));
        }
    }
    return 0;
}