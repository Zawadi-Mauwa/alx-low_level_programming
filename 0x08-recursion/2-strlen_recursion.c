#include "holberton.h"
/**
 *_strlen_recursion - Will return the lenght of a string
 *
 *@s: Only parameter and is a pointer to a string
 *
 *Return: Should return the lenght of string
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
