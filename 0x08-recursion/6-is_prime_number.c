#include "holberton.h"

/**
 * is_prime_number - detects if an input number is a prime number
 * 
 * @n: Only parameter and is an input number
 *
 * Return: Should return an int
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (getNumPrim(n, 2));
}

/**
 * getNumPrim - function that gets if num is 0 or 1
 *
 * @num:  1st parameter and is an input number
 *
 * @i: 2nd parameter and is a counter variable
 *
 * Return: Should return an int
 */

int getNumPrim(int num, int i)
{
if (num == i)
return (1);
if (num % i == 0)
return (0);
return (getNumPrim(num, i + 1));
}
