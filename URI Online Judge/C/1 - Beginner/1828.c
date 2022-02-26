#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void game_results(char *sheldon, char *raj, int i);

int main()
{
    int t, i;
    char sheldon[10], raj[10];

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%s %s", sheldon, raj);
        game_results(sheldon, raj, i);
    }

    return 0;
}

void game_results(char *sheldon, char *raj, int i)
{
    if (strcmp(sheldon, raj) == 0)
    {
        printf("Caso #%d: De novo!\n", i + 1);
    }
    else if ((strcmp(sheldon, "tesoura") == 0) && (strcmp(raj, "papel") == 0) || (strcmp(sheldon, "tesoura") == 0) && (strcmp(raj, "lagarto") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if ((strcmp(sheldon, "papel") == 0) && (strcmp(raj, "pedra") == 0) || (strcmp(sheldon, "papel") == 0) && (strcmp(raj, "Spock") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if ((strcmp(sheldon, "pedra") == 0) && (strcmp(raj, "lagarto") == 0) || (strcmp(sheldon, "pedra") == 0) && (strcmp(raj, "tesoura") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if ((strcmp(sheldon, "lagarto") == 0) && (strcmp(raj, "Spock") == 0) || (strcmp(sheldon, "lagarto") == 0) && (strcmp(raj, "papel") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if ((strcmp(sheldon, "Spock") == 0) && (strcmp(raj, "tesoura") == 0) || (strcmp(sheldon, "Spock") == 0) && (strcmp(raj, "pedra") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else if ((strcmp(sheldon, "papel") == 0) && (strcmp(raj, "pedra") == 0) || (strcmp(sheldon, "papel") == 0) && (strcmp(raj, "Spock") == 0))
    {
        printf("Caso #%d: Bazinga!\n", i + 1);
    }
    else
    {
        printf("Caso #%d: Raj trapaceou!\n", i + 1);
    }
}