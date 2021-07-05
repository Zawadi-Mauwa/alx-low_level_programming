#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Will print sum of two diagonals of a square matrix of integers
 *
 * @a: 2nd parameter, the square matrix that prints the sum of diagonals
 *
 * @size: 2nd parameter, the size of the matrix
 *
 * Return: Should return void
 */

void print_diagsums(int *a, int size)
{
  int i;
  int sum = 0;
  int sum1 = 0;
  int sz = size * size;

  for (i = 0; i < sz; i += size + 1)
    {
      sum += a[i];
    }

  for (i = size - 1; i < sz - 1; i += size - 1)
    {
      sum1 += a[i];
    }

printf("%d, %d\n", sum, sum1);
}









{
int i;

unsigned int sum, sum1;

sum = 0;
sum1 = 0;

for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
sum1 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum1);
}
