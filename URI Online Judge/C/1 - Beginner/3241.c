#include <stdio.h>
#include <string.h>
#include <math.h>

void solve(short unsigned int n);
void sum(char *str);

int main()
{
    short unsigned int n;

    scanf("%hu", &n);

    solve(n);

    return 0;
}

void solve(short unsigned int n)
{
    if (n > 0)
    {
        char str[10];

        scanf("%s", str);

        if (str[0] == 'P')
        {
            printf("skipped\n");
        }
        else
        {
            sum(str);
        }

        solve(--n);
    }
}

void sum(char *str)
{
    short unsigned int a = 0, b = 0;
    char numA[5] = {'\0', '\0', '\0', '\0', '\0'}, numB[5] = {'\0', '\0', '\0', '\0', '\0'};
    short int i, j = 0;

    for (i = strlen(str) - 1;; i--)
    {
        if (str[i] == '+')
        {
            i--;
            break;
        }
        else
        {
            numB[j] = str[i];
            j++;
        }
    }

    for (j = 0; i > -1; i--)
    {
        numA[j] = str[i];
        j++;
    }

    for (i = strlen(numA) - 1; i > -1; i--)
    {
        a += ((int)numA[i] - 48) * pow(10, i);
    }

    for (i = strlen(numB) - 1; i > -1; i--)
    {
        b += ((int)numB[i] - 48) * pow(10, i);
    }

    printf("%hu\n", a + b);
}