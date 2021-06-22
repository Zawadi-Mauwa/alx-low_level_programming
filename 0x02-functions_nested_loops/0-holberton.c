#include "holberton.h"

/**
 *main - point of entry or point of exercution.
 *
 *Return: must always return 0 in the case of successful exercution.
 *
 */

int main(void)
{
char school[] ="Holberton";
int i;

for (i = 0; i < 9; i++)
{
_putchar(school[i]);
}
_putchar('\n');

return (0);
}
