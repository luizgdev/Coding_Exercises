#include <stdio.h>
int main()
{
    double salary, taxes, aux;
    scanf("%lf", &salary);
    if (salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary >= 2000.01 && salary <= 3000.00)
    {
        salary -= 2000.00;
        taxes = (salary * (8.0 / 100.0));
        printf("R$ %.2lf\n", taxes);
    }
    else if (salary >= 3000.01 && salary <= 4500.00)
    {
        aux = (salary - 3000.00);
        salary -= (2000.00 + aux);
        taxes = (salary * (8.0 / 100.0));
        taxes += (aux * (18.0 / 100.0));
        printf("R$ %.2lf\n", taxes);
    }
    else if (salary > 4500.00)
    {
        aux = (salary - 4500.00);
        salary -= (3500.00 + aux);
        taxes = (salary * (8.0 / 100.0));
        taxes += (1500.00 * (18.0 / 100.0));
        taxes += (aux * (28.0 / 100.0));
        printf("R$ %.2lf\n", taxes);
    }
    return 0;
}