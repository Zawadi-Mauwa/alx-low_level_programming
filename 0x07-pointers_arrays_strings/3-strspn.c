#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Will get the length of a prefix substring
 *
 * @s: 1st parameter, the string to search the bytes of
 *
 * @accept: 2nd parameter, the bytes to check
 *
 * Return: Must return count, offset from beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int len = 0;
int len2 = 0;
for (len2 = 0, count = 0; *(accept + len) != '\0'; len++)
{
while (*(s + len2) != '\0')
{
if (*(accept + len) == *(s + len2))
return (count + 1);
count++;
len2++;
}
}
if (*(accept + len) != *(s + len))
return (0);
return (count);
}
