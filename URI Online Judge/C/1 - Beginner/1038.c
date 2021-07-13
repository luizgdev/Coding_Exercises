#include <stdio.h>
int main()
{
    int code, qtd;
    float valor = 0;
    scanf("%d %d", &code, &qtd);
    switch (code)
    {
    case 1:
        valor += 4;
        break;
    case 2:
        valor += 4.50;
        break;
    case 3:
        valor += 5;
        break;
    case 4:
        valor += 2;
        break;
    case 5:
        valor += 1.50;
        break;
    default:
        valor = 0;
    }
    valor *= qtd;
    printf("Total: R$ %.2f\n", valor);
    return 0;
}