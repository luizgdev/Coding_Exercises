#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    char s[100];
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i <= n; i++)
        fgets(s, 100, stdin);
    printf("Ciencia da Computacao\n");
    return 0;
}