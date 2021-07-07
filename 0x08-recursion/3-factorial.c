#include "holberton.h"
/**
 *factorial - Will return the factorial of a given number
 *
 *@n: Only parameter and is a number to find factorial of number
 *
 *Return: Should return -1 if n < 0
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}
