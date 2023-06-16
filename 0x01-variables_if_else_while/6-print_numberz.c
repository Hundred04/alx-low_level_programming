#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}
