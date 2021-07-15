#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Will concatenate/combine two strings
 *
 * @s1: 1st parameter amd is the destination string
 *
 * @s2: 2nd parameter and is the source string
 *
 * @n: 3rd parameter and is number of bytes from s2 to be copied
 *
 * Return: should return concatenated/combined string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len = n, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len++;
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
return (NULL);
len = 0;
for (i = 0; s1[i]; i++)
ptr[len++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
ptr[len++] = s2[i];
ptr[len] = '\0';
return (ptr);
}
