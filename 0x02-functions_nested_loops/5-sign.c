#include "holberton.h"
/**
 * print_sign - checks if the letter provided is in actually a letter
 *
 * @p: Parameter to check if n is positive, negative or zero
 *
 * Return: Should return void.
 */

int print_sign(int p)
{

if (p > 0)
{
_putchar('+');
return (1);
}
else if (p < 0)
{
_putchar('-');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
