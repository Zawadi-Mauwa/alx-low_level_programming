#include <unistd.h>

/**
 * _putchar - Will  write the character c to the stdout
 *
 * @c: Only parameter and is the char to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
