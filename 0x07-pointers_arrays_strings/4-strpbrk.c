#include "holberton.h"

/**
 * _strpbrk - Will searche a string for a set of bytes
 *
 * @s: 1st parameter, the string to be searched
 *
 * @accept: 2nd parameter, set of bytes to be searched for
 *
 * Return:  - a pointer to the matched byte of a matched set
 *         If set not matched zero or NULL
 */

char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}

s++;
}

return ('\0');
}
