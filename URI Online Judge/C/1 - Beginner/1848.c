#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, sum;
    char string[9];

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        do
        {
            fgets(string, 9, stdin);

            if (strcmp(string, "---\n") == 0)
            {
                sum += 0;
            }
            else if (strcmp(string, "--*\n") == 0)
            {
                sum += 1;
            }
            else if (strcmp(string, "-*-\n") == 0)
            {
                sum += 2;
            }
            else if (strcmp(string, "-**\n") == 0)
            {
                sum += 3;
            }
            else if (strcmp(string, "*--\n") == 0)
            {
                sum += 4;
            }
            else if (strcmp(string, "*-*\n") == 0)
            {
                sum += 5;
            }
            else if (strcmp(string, "**-\n") == 0)
            {
                sum += 6;
            }
            else if (strcmp(string, "***\n") == 0)
            {
                sum += 7;
            }
        } while (strcmp(string, "caw caw\n") != 0);

        printf("%d\n", sum);
    }

    return 0;
}