#include "holberton.h"

/**
 * print_array - Will print `n` elements of an array of integers
 *
 * @a: It's a parameter of int type array pointer
 *
 * @n: It's a parameter of int type integer
 * 
 * Return: Should always return void
 */

void print_array(int *a, int n)
{
int i;

i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
