#include "function_pointers.h"
/**
 * print_name - Will print a name 
 *
 * @name: 2nd parameter and is a string 
 *
 * @f: 2nd parameter and is a function 
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
