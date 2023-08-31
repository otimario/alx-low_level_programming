#include "main.h"

/**
 * _strlen_recursion - Will calculate the length of a string
 *
 * @s: The string to be counted
 *
 * Return: Always 0 for success
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
