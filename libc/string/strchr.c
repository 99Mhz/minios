#include "../include/string.h"

/* Search for char c in string *s
 */
char *strchr(const char *s, int c)
{
    while(*s != (char)c)
    {
        if(!*s++)
            return 0;
    }
    return (char*)s;
}
