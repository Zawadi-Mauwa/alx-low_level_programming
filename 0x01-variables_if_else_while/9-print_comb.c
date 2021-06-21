#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point or point of exercution
 *
 * Return: Always return 0 in the case of success
 */

int integer;

for (integer = 0 ; integer <= 9 ; integer++)
{
putchar(integer + '0');
if (integer != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
