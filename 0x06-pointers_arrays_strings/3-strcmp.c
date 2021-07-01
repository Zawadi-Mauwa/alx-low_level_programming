#include "holberton.h"

/**
 * _strcmp - Will compare s1 and s2
 *
 * @s1: 1st param string to be compared against s2
 *
 * @s2: 2nd param string to be compared against s1
 *
 * Return: Should always return 0 in case of success
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while ((s1[i] == s2[i]) && (s1[i] != '\0'))
{
i++;
}
return (s1[i] - s2[i]);
}
