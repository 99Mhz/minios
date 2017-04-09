#include "../include/string.h"

/* Returns the length of a char array
 */
size_t strlen(const char* str)
{
    size_t ret = 0;
    while(str[ret] != 0)
        ret++;

    return ret;
}
