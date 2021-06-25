#include "holberton.h"

/**
 * largest_number - Should return the largest of 3 numbers
 * @a: first integer parameter passed
 * @b: second integer parameter passed
 * @c: third integer paramerter passed
 * Return: Should retern the largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c && b > a)
{
largest = b;
}
else if (c > b)
{
largest = c;
}
else
{
largest = b;
}

return (largest);
}
