#include "holberton.h"

/**
 * reverse_array - Will reverse the content of an array of integers.
 *
 * @a: 1st paran and its the array to reverse
 *
 * @n: 2nd param and is size of elements in the array
 *
 *Return: Should always return void.
 */

void reverse_array(int *a, int n)
{
int i, temp;
i = temp =  0;
n -= 1;
while (i <= n)
{
temp = a[n];
a[n--] = a[i];
a[i++] = temp;
}
}
