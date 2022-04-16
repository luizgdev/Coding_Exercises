#include <stdio.h>

long long int count = 0;

void solve(long long int numero_de_casos);
long long int josephus(long long int n, long long int k);

int main()
{
    long long int nc, n, k;

    scanf("%lld", &nc);

    solve(nc);

    return 0;
}

void solve(long long int numero_de_casos)
{
    if (numero_de_casos > 0)
    {
        long long int n, k;

        scanf("%lld %lld", &n, &k);

        printf("Case %lld: %lld\n", ++count, josephus(n, k));

        solve(--numero_de_casos);
    }
}

long long int josephus(long long int n, long long int k)
{
    long long int x, i;

    for (i = 1; i <= n; i++)
    {
        x = k * i;
        while (x > n)
        {
            x = (k * (x - n) - 1) / (k - 1);
        }
    }

    return x;
}