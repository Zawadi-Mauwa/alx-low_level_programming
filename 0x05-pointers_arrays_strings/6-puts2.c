#include "holberton.h"
/**
 *puts2 - Prints every other char of a string & start with first char
 *
 *@str: Its the only parameter of this function
 *
 *Return: Should always return void
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
