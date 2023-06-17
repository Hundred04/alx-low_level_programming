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
	char c;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
