#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Should print the product of argument numbers
 *
 * @argc: 1st parameter and is an  argument counter
 *
 * @argv: 2nd parameter and will be  multiplyed
 *
 * Return: Should retun 0 in case of success
 */

int main(int argc, char *argv[])
{
int j;
int i = 1;
int sum = 0;

if (argc == 0)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
