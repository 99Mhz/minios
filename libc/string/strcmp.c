#include "../include/string.h"

/*compair two strings 
 * positive if s1 is greater than s2
 * negitave if s1 is less than s2
 * zero if s1 equals s2 
 */
int strcmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1 == *s2))
        s1++, s2++;
    
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
