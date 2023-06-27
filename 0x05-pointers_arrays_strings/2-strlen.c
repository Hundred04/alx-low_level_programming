#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: check for string lenght
 *
 * Return: string lenght(success)
 */

int _strlen(char *s)
{
	int len = '0';

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
