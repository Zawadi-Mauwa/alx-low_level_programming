#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point or point of exercution
 *
 * Return: Always return 0 in the case of success
 */
int main(void)
{
char character;

for (character = '0' ; character <= '9' ; character++)
{
putchar(character);
}
for (character = 'a' ; character <= 'f' ; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
