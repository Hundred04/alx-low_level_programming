#include "main.h"

/**
 * _isupper - check for upper case character
 * @c: upper case
 * Return: 1 if c is upper case, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
