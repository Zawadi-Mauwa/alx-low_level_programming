#include "holberton.h"

/**
 * _memset - will fill memory with a constant byte
 *
 * @s: first parameter - array of characters
 *
 * @b: second parameter char bytes
 *
 * @n: third parameter amount of spaces to fill
 *
 * Return: Should return a  pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}x
