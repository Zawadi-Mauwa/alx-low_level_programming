#include <stdio.h>
/**
 * main - Should print number of arguments passed into the program
 *
 * @argc: 1st parameter and is an int
 *
 * @argv: 2nd parameter and is a list or an array
 *
 * Return: Should return 0 in the case if success
 */
int main(int argc, char const *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
