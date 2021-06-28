#include "holberton.h"

/**
 *_puts - Should print a string
 *
 *@str: It's the onlt parameter for this function(string)
 *
 *Return: It should always return void
 */

void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++; 
}
 _putchar('\n');
}
