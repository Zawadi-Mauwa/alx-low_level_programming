#include "holberton.h" 
#include <stdio.h>

/** 
 * _strcat - appends string 2 to string 1
 *
 * @dest: 1st param & pointer to destination string
 * 
 * @src: 2nd param & pointer to source string 
 *
 * Return: Retuns pointer to resulting string dest 
 */

char *_strcat(char *dest, char *src)
{

int i, j;
i = 0;

for (j = 0; dest[j] != '\0'; j++);

while (src[i] != '\0')
{

dest[j + i] = src[i];
i++;

}

return (dest);

}
