#include "holberton.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *
 *@dest: 1st parameter, a pointer to the destination
 *
 *@src: 2nd parameter' a pointer to the source string
 *
 *@n: 3rd parameter, number of bytes that must be coppied
 *
 *Return: Should return a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter;

for (counter = 0; counter < n; counter++)
{
dest[counter] = src[counter];
}

return (dest);
}
