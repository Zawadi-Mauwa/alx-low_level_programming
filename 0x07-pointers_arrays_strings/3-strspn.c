#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Will get the length of a prefix substring
 *
 * @s: 1st parameter, the string to search the bytes of
 *
 * @accept: 2nd parameter, the bytes to check
 *
 * Return: Must return count, offset from beginning of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count, count1, match = 0;

count = 0;
while (s[count] != '\0')
{
if (s[count] != 32)
{
count1 = 0;
while (accept[count1] != '\0')
{
if (accept[count1] == s[count])
{
match = match + 1;
}
count1++;

}
}
else
return (match);

count++;
}
return (match);
}
