#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, j, sum = 0;
    char led[50000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", led);
        for (j = 0; j < strlen(led); j++)
        {
            switch (led[j])
            {
            case '1':
                sum += 2;
                break;
            case '2':
                sum += 5;
                break;
            case '3':
                sum += 5;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 3;
                break;
            case '8':
                sum += 7;
                break;
            case '9':
                sum += 6;
                break;
            case '0':
                sum += 6;
                break;
            default:
                break;
            }
        }
        printf("%d leds\n", sum);
        sum = 0;
    }
    return 0;
}
