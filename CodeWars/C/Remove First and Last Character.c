#include <stdlib.h>
#include <string.h>

char *remove_char(char *dst, const char *src)
{
    memset(dst, '\0', strlen(dst));

    for (int i = 1; i < (int)strlen(src) - 1; i++)
    {
        dst[i - 1] = src[i];
    }

    return dst;
}