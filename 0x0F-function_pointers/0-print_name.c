#include "function_pointers.h"

/**
 * print_name - This prints a name
 * @name: The name that will print
 * @f: Pointer to function
 *
 * Return: Nothing is returned
 *
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
