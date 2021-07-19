#include <stdio.h>
/**
 * main - will Print name of the file the program was compiled from
 *
 * Return: Should always return 0 in case of sucsess
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
