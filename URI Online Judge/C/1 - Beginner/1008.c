#include <stdio.h>
int main()
{
    int num, horas;
    float qtd_horas;
    scanf("%d %d %f", &num, &horas, &qtd_horas);
    float salario = (horas * qtd_horas);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}