#include "function_pointers.h"

/**
* print_name - uses pointer to a funtion to print name
* @name: name to print
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name && f))
		f(name);
}
