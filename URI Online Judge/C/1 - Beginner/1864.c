#include <stdio.h>
#include <stdlib.h>

#define string "LIFE IS NOT A PROBLEM TO BE SOLVED"

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}