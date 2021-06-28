#include "holberton.h"

/**
 *swap_int - will swap or exchange the vlues of int a and int b
 *
 *@a: It's the first parameter to be passed for this function
 *
 *@b: It's the second parameter to be passed for this function
 *
 *Return: It should always return void
 */

void swap_int(int *a, int *b)
{
int  temp;

temp = *a;
*a = *b;
*b = temp;
}
