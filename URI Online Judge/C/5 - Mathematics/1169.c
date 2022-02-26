#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(unsigned n);

int main()
{
    unsigned n;

    scanf("%u", &n);

    solve(n);

    return 0;
}

void solve(unsigned n)
{
    unsigned x;
    long long num;

    if (n > 0)
    {
        scanf("%u", &x);
        num = (pow(2, x) / 12000);
        printf("%lld kg\n", num);
        solve(--n);
    }
}
