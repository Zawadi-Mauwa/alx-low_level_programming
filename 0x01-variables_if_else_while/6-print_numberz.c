#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for writing entire base10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integer;

for (integer = '0' ; integer <= '9' ; integer++)
{
putchar(integer);
}
putchar('\n');
return (0);
}
