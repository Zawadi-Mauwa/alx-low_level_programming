#include "holberton.h"
/**
 * _print_rev_recursion - Will print a string in reverse
 *
 * @s: Only parameter and is a pointer to a string
 *
 * Return: Should return void
 */

void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
