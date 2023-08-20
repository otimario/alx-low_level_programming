#include "main.h"

/**
 * _isupper: This checks if a letter is uppercase
 *@x:Checks numbers to be checked
 * Return: if its upper case it returns 1 and returns 0 for anything else that is not uppercase
 */

int_isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
