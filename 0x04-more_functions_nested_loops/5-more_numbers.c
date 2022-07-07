#include"main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
	int x, z;


	for (x = 0; x < 10; x++)
	{
		for (z = 0; z < 15; z++)
		{
			if (x <= 10)
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
