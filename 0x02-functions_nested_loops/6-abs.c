#include "holberton.h"

/**
 * _abs - Absolute value
 *
 * @b: Parameter to check b
 *
 * Return: Always has to return 0 in the case of successful exercution.
 */

int _abs(int b)
{
if (b > 0)
{
return (b);
}
else if (b < 0)
{
b = b * -1;
return (b);
}
else
{
return (b);
}
}
