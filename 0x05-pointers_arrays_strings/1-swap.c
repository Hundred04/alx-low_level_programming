#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: first number to be swap
 * @b: second number to be swap
 *
 * Return: void(success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
