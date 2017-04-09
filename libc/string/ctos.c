#include "../include/string.h"

/* 
 * convert a single char to a null terminating string 
 */
char *ctos(char s[2], const char c)
{
    s[0] = c;
    s[1] = '\0';
    return s;
}

