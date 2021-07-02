#include "holberton.h"
/**
* _strncat - appends string 2 to string 1
*
* @dest: Char pointer to destination string
*
* @src: Char pointer to source string
*
* @n: Is the number of bytes to be printed
*
* Return: Returns the pointer to resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
