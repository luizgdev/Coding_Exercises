#include <stdio.h>
int main()
{
    char nome[100];
    double salario_fixo, valor_vendas;
    scanf("%s", nome);
    scanf("%lf %lf", &salario_fixo, &valor_vendas);
    double total = (salario_fixo + ((15.0 / 100.0) * valor_vendas));
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}