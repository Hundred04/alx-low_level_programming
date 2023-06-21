#include "main.h"

/**
 * print_alphabet - make the alphabet
 *
 * Return: void (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
