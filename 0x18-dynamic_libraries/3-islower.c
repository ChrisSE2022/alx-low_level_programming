#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * @c: character to be displayed
 * lowercase character. Another cases, show 0
 *
 * Return: 1 for c lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
