#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const char *solve(char *string);

int main()
{
    unsigned short int n, i;
    char string[1000];

    scanf("%hd", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        fgets(string, 1000, stdin);
        printf("%s\n", solve(string));
    }

    return 0;
}

const char *solve(char *string)
{
    unsigned short int i, count = 0;
    bool alfabeto[26];

    while (string[i] != '\n')
    {
        switch (string[i])
        {
        case 'a':
            alfabeto[0] = true;
            break;
        case 'b':
            alfabeto[1] = true;
            break;
        case 'c':
            alfabeto[2] = true;
            break;
        case 'd':
            alfabeto[3] = true;
            break;
        case 'e':
            alfabeto[4] = true;
            break;
        case 'f':
            alfabeto[5] = true;
            break;
        case 'g':
            alfabeto[6] = true;
            break;
        case 'h':
            alfabeto[7] = true;
            break;
        case 'i':
            alfabeto[8] = true;
            break;
        case 'j':
            alfabeto[9] = true;
            break;
        case 'k':
            alfabeto[10] = true;
            break;
        case 'l':
            alfabeto[11] = true;
            break;
        case 'm':
            alfabeto[12] = true;
            break;
        case 'n':
            alfabeto[13] = true;
            break;
        case 'o':
            alfabeto[14] = true;
            break;
        case 'p':
            alfabeto[15] = true;
            break;
        case 'q':
            alfabeto[16] = true;
            break;
        case 'r':
            alfabeto[17] = true;
            break;
        case 's':
            alfabeto[18] = true;
            break;
        case 't':
            alfabeto[19] = true;
            break;
        case 'u':
            alfabeto[20] = true;
            break;
        case 'v':
            alfabeto[21] = true;
            break;
        case 'w':
            alfabeto[22] = true;
            break;
        case 'x':
            alfabeto[23] = true;
            break;
        case 'y':
            alfabeto[24] = true;
            break;
        case 'z':
            alfabeto[25] = true;
            break;
        default:
            break;
        }
        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (alfabeto[i] == true)
        {
            count++;
        }
    }

    if (count == 26)
    {
        return "frase completa";
    }
    else if (count >= 13)
    {
        return "frase quase completa";
    }

    return "frase mal elaborada";
}