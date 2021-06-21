#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point or point of exercution
 *
 * Return: Always 0 in the case of success
 */
int main(void)
{
char character;

for (character = 'a' ; character <= 'z' ; character++)
{
putchar(character);
}
for (character = 'A' ; character <= 'Z' ; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
