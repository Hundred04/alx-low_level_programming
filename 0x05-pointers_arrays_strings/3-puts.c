#include "main.h"

/**
 * _puts - print a string, followed by newline
 * @str: string to be print out
 *
 * Return: string(success)
 */

void _puts(char *str)
{
	for (; *str != '\0'; ++str)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
