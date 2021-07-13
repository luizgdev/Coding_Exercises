#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[15];
    fflush(stdin);
    scanf("%s", palavra);
    if (strcmp(palavra, "vertebrado") == 0)
    {
        fflush(stdin);
        scanf("%s", palavra);
        if (strcmp(palavra, "ave") == 0)
        {
            fflush(stdin);
            scanf("%s", palavra);
            if (strcmp(palavra, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(palavra, "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(palavra, "mamifero") == 0)
        {
            fflush(stdin);
            scanf("%s", palavra);
            if (strcmp(palavra, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(palavra, "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(palavra, "invertebrado") == 0)
    {
        fflush(stdin);
        scanf("%s", palavra);
        if (strcmp(palavra, "inseto") == 0)
        {
            fflush(stdin);
            scanf("%s", palavra);
            if (strcmp(palavra, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(palavra, "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(palavra, "anelideo") == 0)
        {
            fflush(stdin);
            scanf("%s", palavra);
            if (strcmp(palavra, "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(palavra, "onivoro") == 0)
                printf("minhoca\n");
        }
    }
    return 0;
}