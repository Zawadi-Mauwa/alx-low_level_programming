#include "holberton.h"

/**
 * _puts_recursion - Will print a string, followed by a new line
 *
 * @s: The only parameter and is a pointer to a string
 *
 * Return: Should return void
 */


void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}

}
