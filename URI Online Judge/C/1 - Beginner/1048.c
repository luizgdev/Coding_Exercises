#include <stdio.h>
int main()
{
    float salario;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 400.00)
    {
        float novo_salario = salario + ((15.0 / 100.0) * salario);
        float reajuste = ((15.0 / 100.0) * salario);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novo_salario, reajuste);
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        float novo_salario = salario + ((12.0 / 100.0) * salario);
        float reajuste = ((12.0 / 100.0) * salario);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novo_salario, reajuste);
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        float novo_salario = salario + ((10.0 / 100.0) * salario);
        float reajuste = ((10.0 / 100.0) * salario);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novo_salario, reajuste);
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        float novo_salario = salario + ((7.0 / 100.0) * salario);
        float reajuste = ((7.0 / 100.0) * salario);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novo_salario, reajuste);
    }
    else if (salario > 2000.00)
    {
        float novo_salario = salario + ((4.0 / 100.0) * salario);
        float reajuste = ((4.0 / 100.0) * salario);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novo_salario, reajuste);
    }
    return 0;
}