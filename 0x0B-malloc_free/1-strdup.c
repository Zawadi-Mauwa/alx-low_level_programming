#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 *containing copy of the string
 *
 * @str: only parameter and is a string that'll be duplicated/ copied
 *
 * Return: Must return pointer in case of sucess & null in case of failior
 */

char *_strdup(char *str)
{
char *strDup;
int i, j;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
i++;
strDup = malloc(sizeof(*str) * i);
if (strDup == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
{
strDup[j] = str[j];
j++;
}
return (strDup);
}
