#include "../include/string.h"

/* copy string src to dest
 */
char* strcpy(char* dest, const char* src)
{
    char* tmp = dest;

    while((*dest++ = *src++) != 0);

    return tmp;
}
