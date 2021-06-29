#include "holberton.h"
/**
 *puts2 - Will print every other character of a string & start with first character
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
if (i % 2 ==0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
