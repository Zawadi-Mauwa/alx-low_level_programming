#include "holberton.h"

/**
 *print_rev - Will print a sting in reverse
 *
 *@s: It's the only parameter in this function
 *
 *Return: It should always retun void
 */

void print_rev(char *s)
{
int i = 0:

while (s[i])
i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
