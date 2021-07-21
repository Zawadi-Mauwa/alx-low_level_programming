#include "function_pointers.h"
/**
 * array_iterator - Will ecute function as parameter on 
 *every element of an array
 *
 * @array: 1st parameter & is an array of intege
 *
 * @size: 2nd parameter & is the size of array
 *
 * @action: 3rd parameter & is a function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
