#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  Will add all arguments together
 *
 * @n: 1st parameter & is  number of undefined arguments
 *
 * Return: Should return sum of args & on error, 0 is returned
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;
va_start(list, n);
if (n != 0)
for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
;
va_end(list);
return (sum);
}
