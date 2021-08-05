#include "holberton.h"
/**
 * print_binary - Will print the  decimal to binary without use / %
 *
 * @n: Only parameter & is the decimal
 *
 * Return: should return nothing
 */
void print_binary(unsigned long int n)
{
int flag = 0;
unsigned long int mask = 1;
mask <<= 63;
if (n == 0)
_putchar('0');
while (mask > 0)
{
if ((n & mask) == 0 && flag == 1)
_putchar('0');
if ((n & mask) != 0)
{
_putchar('1');
flag = 1;
}
mask = mask >> 1;
}
}
