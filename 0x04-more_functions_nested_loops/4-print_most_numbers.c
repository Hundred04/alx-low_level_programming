#include "main.h"

/**
 * print_most_numbers - print digit from 1 to 9, except 2 & 4
 *
 * Return: Always 0(success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
