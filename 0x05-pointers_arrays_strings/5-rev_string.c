#include "holberton.h"
/**
 *rev_string - It will reverse a string
 *
 *@s: It's the only parameter for this function
 *
 *Return: should always return void
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;
int temp;

while (s[i] != '\0')
{
i++;
}
i--;

while (i > j)
{
temp = s[i];
s[i--] = s[j];
s[j++] = temp;
}
}
