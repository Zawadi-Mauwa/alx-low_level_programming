#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Will allocate memory
 *
 * @b: only parameter and it the amount of bytes allocated
 *
 * Return: pointer to the allocated memory else value equates to 98
 */
void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == 0)
exit(98);
return (ptr);
}
