#include "../include/string.h"

/* Search for string s2 in s1
 */
char *strstr(char *s1, const char *s2)
{
    size_t n = strlen(s2);
    while(*s1)
        if(!memcmp(s1++, s2, n))
            return s1 - 1;
    
    return 0;
}

