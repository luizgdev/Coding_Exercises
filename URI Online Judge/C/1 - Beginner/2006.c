#include <stdio.h>

int main()
{
    int t, i, tea, total = 0;
    scanf("%d", &t);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tea);
        if (tea == t)
            total++;
    }
    printf("%d\n", total);
    return 0;
}