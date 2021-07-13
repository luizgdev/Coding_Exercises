#include <stdio.h>
int main()
{
    int cod_1, qtd_cod_1;
    float val_cod_1, val_cod_2;
    scanf("%d %d %f", &cod_1, &qtd_cod_1, &val_cod_1);
    int cod_2, qtd_cod_2;
    scanf("%d %d %f", &cod_2, &qtd_cod_2, &val_cod_2);
    float total = ((qtd_cod_1 * val_cod_1) + (qtd_cod_2 * val_cod_2));
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}