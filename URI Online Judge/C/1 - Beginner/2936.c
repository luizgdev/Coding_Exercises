#include <stdio.h>
int main()
{
    int i, servings = 0, aux = 0;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &aux);
        if (i == 1)
            servings += (aux * 300);
        else if (i == 2)
            servings += (aux * 1500);
        else if (i == 3)
            servings += (aux * 600);
        else if (i == 4)
            servings += (aux * 1000);
        else if (i == 5)
            servings += (aux * 150);
    }
    printf("%d\n", (servings + 225));
    return 0;
}