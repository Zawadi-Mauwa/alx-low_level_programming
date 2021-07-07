#include "holberton.h"
/**
 *_evaluate - Will evaluate the function square root
 *@i: 1st parameter and is an interger
 *@n: 2nd parameter and is also an interger
 *Return: Should return sqare roott
 */

int _evaluate(int i, int n)
{
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n)
return (i);

return (-1);
}

/**
 * _sqrt_recursion - Will return the natural square root of a number
 * @n: only parameter and is an integer to find sqrt of
 *
 * Return: return the square root or -1
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
