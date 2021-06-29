#include "holberton.h"

/**
 * puts_half - Will print only half of a string
 *
 * @str: Only paramerter of function (char array string type)
 *
 * Return: Should always return void
 */

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;

i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
