#include "main.h"

/**
 * _strspn - Entry point for length of substring
 * @s: input string to be searched
 * @accept: - Inpiut value
 * Return: 0, always success
 *
 */

unsigned int_strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
		
	}
	return 0;
}
