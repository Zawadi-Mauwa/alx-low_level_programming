#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point or point of exercution
 *
 * Return: Always returns 0 in the case of success
 */
int main(void)
{
int num;
 
for (num = 'a' ; num <= 'z' ; num++)
{
if (num != 'q' && num != 'e')
{
putchar(num);
}
}
putchar('\n');
return (0);
}
