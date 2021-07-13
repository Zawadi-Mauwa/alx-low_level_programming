#include <stdlib.h>

/**
 * *create_array - Create an array of chars & initialize it 
 * with a specific char
 *
 * @size: 1st parameter and is the size of the array
 *
 * @c: 2nd parameter and is a char to initialize
 *
 * Return: Should return m in the case of successL
 */

char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
return (0);

while (size--)
m[size] = c;
return (m);
}
