#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
		if (digit != '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
