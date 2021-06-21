#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point or point of exercution
 *
 * Return: Always returns 0 in the case of success
 */
int main(void)
{
char character;

for (character = 'z' ; character >= 'a' ; character--)
{
putchar(character);
}
putchar('\n');
return (0);
}
