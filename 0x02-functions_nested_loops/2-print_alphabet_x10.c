#include "holberton.h"
/**
 * print_alphabet_x10 - prints all the alphabets on 10 lines
 *
 * Return: It sould return void.
 */

void print_alphabet_x10(void)
{
int line_count;
char character;

for (line_count = 0; line_count < 10; line_count++)
{
for (character = 'a'; character <= 'z'; character++)
{
_putchar(character);
}
_putchar('\n');
}
}
