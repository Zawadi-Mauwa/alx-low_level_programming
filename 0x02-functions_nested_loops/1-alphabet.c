#include "holberton.h"
#include "string.h"
/**
 * print_alphabet - function to print entire alphabet
 *
 * Return: It'll return void.
 */

void print_alphabet(void)
{
char character;

for (character = 'a' ; character <= 'z' ; character++)
{
_putchar(character);
}
_putchar('\n');
}
