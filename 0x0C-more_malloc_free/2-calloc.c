#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Will allocate memory for an array
 *
 * @nmemb: 1st parameter number of elements
 *
 * @size: 2nd parameter size of bytes
 *
 * Return: pointer to the allocated memory else returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (0);
p = malloc(nmemb * size);
if (p == 0)
return (0);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
