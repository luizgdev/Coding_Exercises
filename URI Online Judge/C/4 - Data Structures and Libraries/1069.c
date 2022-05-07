#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(unsigned n);

int main()
{
    unsigned n;

    scanf("%d", &n);

    solve(n);

    return 0;
}

void solve(unsigned n)
{
    if (n > 0)
    {
        int i;
        char string[1001];
        unsigned esq, dir;

        memset(string, '\0', 1001);

        scanf("%s", string);

        esq = dir = 0;

        for (i = 0; i < strlen(string); i++)
        {
            if (string[i] != '.')
            {
                (string[i] == '<' ? esq++ : dir++);
            }
        }

        ((esq <= dir) ? (printf("%d\n", esq)) : (printf("%d\n", dir)));

        solve(--n);
    }
}