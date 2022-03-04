#include <ctype.h>

char *get_initials(const char *full_name, char initials[4])
{
    *initials = '\0'; // write to initials

    initials[0] = toupper(full_name[0]);

    initials[1] = '.';

    while (*full_name != ' ')
    {
        full_name++;
    }

    initials[2] = toupper(*(++full_name));

    return initials; // return it
}