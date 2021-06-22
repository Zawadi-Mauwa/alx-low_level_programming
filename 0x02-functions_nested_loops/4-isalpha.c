#include "holberton.h"
/**
 * _isalpha - checks if the letter provided is actually a letter
 *
 * @c: parameter that checks if references are a letter or not
 * 
 * Return: Should return void.
 */

int _isalpha(int c)
{

if (c > 97 && c < 123)
{
return (1);
}
else if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
