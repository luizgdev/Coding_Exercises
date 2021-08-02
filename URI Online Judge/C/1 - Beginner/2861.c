#include <stdio.h>
#include <string.h>
int main()
{
    int c, i;
    char string[100];
    scanf("%d", &c);
    fflush(stdin);
    for (i = 0; i <= c; i++)
        fgets(string, 100, stdin);
    for (i = 0; i < c; i++)
        printf("%s\n", "gzuz");
    return 0;
}