#include <stdio.h>
#include <stdlib.h>
/**
 * main - Point of exercution and  multiplies two arguments
 *
 * @argc: 1st parameter and is an argument count
 *
 * @argv: 2nd parameter and is an argument vector
 *
 * Return: Should return 0 in case of success
 */
int main(int argc, char *argv[])
{
int total = 1, i;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
total *= atoi(argv[i]);
}
printf("%d\n", total);
return (0);
}
printf("Error\n");
return (1);
}
