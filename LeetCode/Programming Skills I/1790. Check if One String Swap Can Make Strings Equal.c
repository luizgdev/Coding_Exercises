char *swapstr(char *str, char *s1, int i, int j)
{
    char tmp;

    strcpy(str, s1);

    tmp = str[j];
    str[j] = str[i];
    str[i] = tmp;

    return str;
}

bool areAlmostEqual(char *s1, char *s2)
{
    if (strcmp(s1, s2) == 0)
    {
        return true;
    }
    else
    {
        char *str = (char *)malloc(strlen(s1) * sizeof(char *));

        for (int i = 0; i < strlen(s1); i++)
        {
            for (int j = 0; j < strlen(s1); j++)
            {
                if (strcmp(swapstr(str, s1, i, j), s2) == 0)
                {
                    free(str);
                    return true;
                }
            }
        }
    }

    return false;
}