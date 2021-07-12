#include <stdio.h>
/**
 * main - should print a program name and aa new line
 *
 * @argc: 1st parameter and is an int
 *
 * @argv: 2nd parameter and is a list or an array
 *
 * Return: should return 0 in the case of success
 */
int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
