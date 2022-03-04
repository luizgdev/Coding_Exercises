#include <stdlib.h>
#include <math.h>

const char *number_to_string(int number)
{
    int numberSize = (log10(abs(number)) + 1);
    char *str;

    if (number > 0)
    {
        str = (char *)malloc(numberSize * sizeof(char *) + 1);

        for (int i = numberSize - 1; i >= 0; i--)
        {
            str[i] = (char)((number % 10) + 48);
            number /= 10;
        }

        str[numberSize + 1] = '\0';
    }
    else if (number < 0)
    {
        str = (char *)malloc(numberSize * sizeof(char *) + 2);

        numberSize++;

        str[0] = '-';

        number = abs(number);

        for (int i = numberSize - 1; i > 0; i--)
        {
            str[i] = (char)((number % 10) + 48);
            number /= 10;
        }

        str[numberSize + 2] = '\0';
    }
    else
    {
        str = (char *)malloc(2 * sizeof(char *));

        str[0] = '0';
        str[1] = '\0';
    }

    return str;
}