#include "holberton.h"

/**
 * _pow_recursion - Will return value of base to the power of eponent
 *
 * @x: 1st parameter and is a base
 *
 * @y: 2nd parameter ans os an exponent
 *
 * Return: Should return the pow recursion
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
