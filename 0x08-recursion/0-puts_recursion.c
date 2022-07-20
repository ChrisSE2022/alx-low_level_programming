#include "main.h"

/**
* _puts_recursion - Prints the strings
*@s: string to be printed
*Return: void
*/

void _puts_recursion(char *s)
{
	_putchar (*s);
	++s;

	if (*s == '\0')
	{
	_putchar ('\n');
	return;
	}
	_puts_recursion(s);
}
