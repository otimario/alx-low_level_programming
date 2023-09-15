#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this will print numbers followed by a new line
 * @seperator: this will be printed between numbers
 * @n:number of intergers to be pass into the function
 * @...: variable number of function arguments
 *
 * REturn: new line
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(nums);
}
