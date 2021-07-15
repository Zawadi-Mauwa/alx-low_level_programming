#include "holberton.h"

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
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size, len1, len2;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n > len2)
n = len2;
size = len1 + n;
ptr = malloc(sizeof(char) * size + 1);
if (!ptr)
return (NULL);
for (j = 0; j < n; j++, i++)
ptr[i] = s2[j];
for (i = 0; i < len1; i++)
ptr[i] = s1[i];
ptr[i] = 0;
return (ptr);
}

/**
 * _strlen - Will return length of a string
 *
 * @s: Only parameter for this function and is string s
 *
 * Return: Should return the length of a string
 */
int _strlen(char *s)
{
char *p = s;

while (*s)
s++;
return (s - p);
}
