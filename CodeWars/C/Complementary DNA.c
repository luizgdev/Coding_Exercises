#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
    int size = strlen(dna);
    int i = 0;
    char *s;

    s = (char *)malloc(size * sizeof(char *));

    while (dna[i] != '\0')
    {
        if (dna[i] == 'A')
        {
            s[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            s[i] = 'A';
        }
        else if (dna[i] == 'G')
        {
            s[i] = 'C';
        }
        else if (dna[i] == 'C')
        {
            s[i] = 'G';
        }
        i++;
    }

    s[size] = '\0';

    return s;
}