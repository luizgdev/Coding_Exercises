#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b, c, d;
    bool check = false;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        scanf("%d %d %d", &b, &c, &d);
        if (c > 0 && d > 0)
            if (b > c && d > a)
                if ((c + d) > (a + b))
                    check = true;
    }
    if (check == true)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}