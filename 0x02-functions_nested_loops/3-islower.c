#include "holberton.h"
/**
 * _islower - Will check if a letter is lowercase or not
 *
 * @i: is an integer parameter from which will be checked whether references are lowercase letter or not
 *
 * Return: It should return void.
 */

int _islower(int i)
{

if (i > 97 && i < 123)
{
return (1);
}
else
{
return (0);
}
}
