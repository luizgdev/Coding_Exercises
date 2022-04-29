#include <stdio.h>

int main()
{
    unsigned int q, i, ok = 0, notok = 0;
    char v;

    scanf("%lu", &q);

    for (i = 0; i < q; i++)
    {
        scanf(" %c", &v);
        (v == '1' ? notok++ : ok++);
    }
    
    (ok > notok ? printf("Y\n") : printf("N\n"));

    return 0;
}