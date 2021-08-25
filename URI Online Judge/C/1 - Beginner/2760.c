#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void readStr(char *str1, char *str2, char *str3)
{
    int i;
    fgets(str1, MAX + 1, stdin);
    fgets(str2, MAX + 1, stdin);
    fgets(str3, MAX + 1, stdin);
    for (i = 0; i < MAX + 1; i++)
        if (str1[i] == '\n')
            str1[i] = '\0';
    for (i = 0; i < MAX + 1; i++)
        if (str2[i] == '\n')
            str2[i] = '\0';
    for (i = 0; i < MAX + 1; i++)
        if (str3[i] == '\n')
            str3[i] = '\0';
}
void printfStr(char *str1, char *str2, char *str3)
{
    int i, j, len;
    printf("%s%s%s\n", str1, str2, str3);
    printf("%s%s%s\n", str2, str3, str1);
    printf("%s%s%s\n", str3, str1, str2);
    len = strlen(str1);
    for (i = 0; (i < len && i < 10); i++)
        printf("%c", str1[i]);
    len = strlen(str2);
    for (i = 0; (i < len && i < 10); i++)
        printf("%c", str2[i]);
    len = strlen(str3);
    for (i = 0; (i < len && i < 10); i++)
        printf("%c", str3[i]);
    printf("\n");
}
int main()
{
    char str1[MAX + 1], str2[MAX + 1], str3[MAX + 1];
    readStr(str1, str2, str3);
    printfStr(str1, str2, str3);
    return 0;
}