#include "holberton.h"
/**
 * is_prime_number - Will check if n is a prime number
 *
 * @resp: 1st parameter and is an int
 *
 * @n: 2nd parameter and is an int
 *
 * Return: Should return either 0 or 1
 */

int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - Will check all number < n if they can divide it
 *
 * @n: 1st parameter and is an  int
 *
 * @resp: 2nd parameter and is an int
 *
 * Return: Should return an int
 */

int check_prime(int n, int resp)
{
if (resp >= n && n > 1)
return (1);
else if (n % resp == 0 || n <= 1)
return (0);
else
return (check_prime(n, resp + 1));
}
