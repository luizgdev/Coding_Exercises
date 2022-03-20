#include <stdio.h>
#include <stdbool.h>

unsigned short int i = 0, j = 0, tmp = 0;

void reading(bool v[2][5]);
char solve(bool v[2][5]);

int main()
{
    bool v[2][5];

    reading(v);

    printf("%c\n", solve(v));

    return 0;
}

void reading(bool v[2][5])
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%hd", &tmp);
            ((tmp == 0) ? (v[i][j] = false) : (v[i][j] = true));
        }
    }
}

char solve(bool v[2][5])
{
    for (j = 0; j < 5; j++)
    {
        if (v[0][j] == v[1][j])
        {
            return 'N';
        }
    }
    return 'Y';
}