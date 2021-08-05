#include "holberton.h"
/**
 * binary_to_uint - Will convert a binary number to an unsigned int
 *
 * @b: Only parameter & is pointer to a string off a binary number
 *
 * Return: unsigned int of decimal value of a binary number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;
num = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
num <<= 1;
if (b[i] == '1')
num += 1;
}
return (num);
}
