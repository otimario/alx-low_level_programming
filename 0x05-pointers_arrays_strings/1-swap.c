#include <stdio.h>

/**
 * swap_int - This swaps th values of two intergers.
 * @a: This is the first interger to be swapped
 * @b: This is the second interger to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
