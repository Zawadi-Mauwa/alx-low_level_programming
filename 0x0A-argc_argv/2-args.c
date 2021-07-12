#include <stdio.h>
/**
 * main - Point of exercution 
 *
 * @argc: 1st parameter and is count of args present
 *
 * @argv: 2nd parameter and is a list or an arrays
 *
 * Return: Should return 0 in the case of success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
