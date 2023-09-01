#include "main.h"

/**
 * _print_rev_recursion - this will print th a string in reverrse order
 * @s: the string to be reversed
 * Return: Nothing is returned
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
