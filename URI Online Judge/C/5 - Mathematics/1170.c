#include <stdio.h>
#include <stdlib.h>

void solve(int n);
int comida(double num);

int main()
{
    int n;

    scanf("%d", &n);

    solve(n);

    return 0;
}

void solve(int n)
{
    double num;

    if (n > 0)
    {
        scanf("%lf", &num);
        printf("%d dias\n", comida(num));
        solve(--n);
    }
}

int comida(double num)
{
    int cont = 0;

    while (num > 1)
    {
        cont++;
        num /= 2.0;
    }

    return cont;
}