#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Must point to first occurance of a character
 *
 * @s: 1st parameter, a string to check
 *
 * @c: 2nd parameter, a character to point
 *
 * Return: Should return pointer on char c pointed to s string
 */

char *_strchr(char *s, char c)
{
int len = 0;

while (*(s + len) != '\0')
{
if (*(s + len) == c)
return ((s + len));
len++;
}
if (c == '\0')
return ((s + len));
return (NULL);
}
