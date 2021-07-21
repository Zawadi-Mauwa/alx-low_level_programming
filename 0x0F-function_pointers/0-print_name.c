#include "function_pointers.h"
/**
 * print_name - prints a name 
 *
 * @name: string 
 *
 * @f: 2nd parameter and is a function 
 */

void print_name(char *name, void (*f)(char *))
{
if (f != 0)
f(name);
}
