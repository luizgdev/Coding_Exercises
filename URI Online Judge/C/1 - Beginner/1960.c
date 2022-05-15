#include <stdio.h>

void recursiveRomanNumbers(short unsigned int num);

int main()
{
    short unsigned int number;

    scanf("%hu", &number);

    recursiveRomanNumbers(number);

    return 0;
}

void recursiveRomanNumbers(short unsigned int num)
{
    if (num > 0)
    {
        if (num > 0 && num < 4)
        {
            printf("I");
            num -= 1;
        }
        else if (num > 3 && num < 9)
        {
            if (num == 4)
            {
                printf("IV");
                num -= 4;
            }
            else
            {
                printf("V");
                num -= 5;
            }
        }
        else if (num > 8 && num < 50)
        {
            if (num == 9)
            {
                printf("IX");
                num -= 9;
            }
            else if (num > 39)
            {
                printf("XL");
                num -= 40;
            }
            else
            {
                printf("X");
                num -= 10;
            }
        }
        else if (num > 49 && num < 100)
        {
            if (num > 89)
            {
                printf("XC");
                num -= 90;
            }
            else
            {
                printf("L");
                num -= 50;
            }
        }
        else if (num > 99 && num < 500)
        {
            if (num > 399)
            {
                printf("CD");
                num -= 400;
            }
            else
            {
                printf("C");
                num -= 100;
            }
        }
        else if (num > 499 && num < 1000)
        {
            if (num > 899)
            {
                printf("CM");
                num -= 900;
            }
            else
            {
                printf("D");
                num -= 500;
            }
        }

        recursiveRomanNumbers(num);
    }
    else
    {
        printf("\n");
    }
}