#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char caractere;
    char string[50];

    scanf("%d %f %c %[^\n]", &inteiro, &real, &caractere, string);

    printf("%d%f%c%s\n", inteiro, real, caractere, string);
    printf("%d\t%f\t%c\t%s\n", inteiro, real, caractere, string);
    printf("%10d%10f%10c%10s\n", inteiro, real, caractere, string);

    return 0;
}