#include "holberton.h"
/**
* _strncpy - Copy str to dest
*
* @n: Number of bytes to use max
*
* @dest: String to copied to
*
* @src: String to be copied to dest
*
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i]= src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
