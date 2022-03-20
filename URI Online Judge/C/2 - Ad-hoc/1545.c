#include <stdio.h>

void solve(unsigned short int k);

int main()
{
    unsigned short int n, k;

    scanf("%hd", &n);

    while (n--)
    {
        scanf("%hd", &k);
        solve(k);
    }

    return 0;
}

void solve(unsigned short int k)
{
    if (k > 0)
    {
        unsigned short int feedback;

        scanf("%hd", &feedback);

        switch (feedback)
        {
        case 1:
            printf("Rolien\n");
            break;
        case 2:
            printf("Naej\n");
            break;
        case 3:
            printf("Elehcim\n");
            break;
        case 4:
            printf("Odranoel\n");
            break;
        default:
            break;
        }
        solve(--k);
    }
}