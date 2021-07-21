#include "function_pointers.h"
/**
 * int_index - Will searche for an integer
 *
 * @array: 1st parameter & is an input array
 *
 * @size: 2nd parameter & is the size of array
 *
 * @cmp: 3rd parameter and is a function
 *
 * Return: Should return the value index of integer found in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && cmp && size && array)
for (i = 0; i <= size; i++)
if (cmp(array[i]))
return (i);
return (-1);
}
