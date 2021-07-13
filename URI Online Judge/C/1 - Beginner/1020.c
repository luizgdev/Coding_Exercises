#include <stdio.h>

int main()
{
    int idade, anos, meses, dias;
    scanf("%d", &idade);
    anos = idade / 365;
    printf("%d ano(s)\n", anos);
    meses = (idade % 365) / 30;
    printf("%d mes(es)\n", meses);
    dias = (idade % 365) % 30;
    printf("%d dia(s)\n", dias);
    return 0;
}