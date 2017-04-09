#include "../include/string.h"

/* Check c is upper case */
int isupper(char c)
{
    return (c >= 'A' && c <= 'Z)
}

/* Check c is lower case */
int islower(char c)
{
    return (c >= 'a' && c <= 'z)
}

/* Check c is an alpha char */
int isalpha(char c)
{
    return (( c>= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/* Check c is a white space character */
int isspace(char c)
{
    return (c == '' || c =='\t' || c == '\n' || c == '\12');
}

/* Check c is is a digit */
int isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/* Trim spaces from left of string */ 
char* ltrim(char* s)
{
    while(isspace(*s))s++;
    return s;
}

/* Trim spaces from right of string */
char* rtrim(char* s)
{
    char* back = s + strlen(s);
    while (isspace(*--back));
    *(back + 1) = '\0';
    return s;
}

/* Trim spaces from left and right of string */
char* trim(char* s)
{
    return rtrim(ltrim(s));
}


