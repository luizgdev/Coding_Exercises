#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
        printf("Impossivel calcular\n");
    else
    {
        double delta;
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
            printf("Impossivel calcular\n");
        else
        {
            double x1, x2;
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("R1 = %.5lf\n", x1);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("R2 = %.5lf\n", x2);
        }
    }
    return 0;
}