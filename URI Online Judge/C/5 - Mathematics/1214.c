#include <stdio.h>
#include <stdlib.h>

void solve(unsigned n, unsigned *v);
double calcMedia(unsigned n, unsigned *v);
double porcentagem(unsigned n, unsigned *v, double media);

int main()
{
    unsigned c, n, *v, i;

    scanf("%u", &c);

    for (i = 0; i < c; i++)
    {
        scanf("%u", &n);
        ((i == 0)
             ? (v = (unsigned *)malloc(n * sizeof(unsigned)))
             : (v = (unsigned *)realloc(v, n * sizeof(unsigned))));

        solve(n, v);
    }

    free(v);

    return 0;
}

void solve(unsigned n, unsigned *v)
{
    int i;
    double media;

    for (i = 0; i < n; i++)
    {
        scanf("%u", &v[i]);
    }
    media = calcMedia(n, v);
    printf("%.3lf%%\n", porcentagem(n, v, media));
}

double calcMedia(unsigned n, unsigned *v)
{
    int i;
    double media = 0;

    for (i = 0; i < n; i++)
    {
        media += v[i];
    }
    return (media / n);
}

double porcentagem(unsigned n, unsigned *v, double media)
{
    int i, cont = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] > media)
        {
            cont++;
        }
    }

    return ((double)cont / (double)n) * 100;
}
