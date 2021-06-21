#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point or point of exercution
 *
 * Return: Always return 0 in the case of success
 */
int main(void)
{
char character;

for (character = 'a' ; character <= 'z' ; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
