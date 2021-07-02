#include "holberton.h"
/**
 * string_toupper - Will change every lowercase letter of
 *
 * to uppercase a string
 *
 * @s: only parameter and is an input string.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
int count = 0;
while (*(s + count) != '\0')
{
if ((*(s + count) >= 97) && (*(s + count) <= 122))
*(s + count) = *(s + count) - 32;
count++;
}
return (s);
}
