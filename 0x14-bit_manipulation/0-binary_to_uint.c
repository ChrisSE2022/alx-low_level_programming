#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow - custom pow fn
 * @base: base of power calc
 * @p: power to raise base to
 * Return: result of pow calc
 */
unsigned int _pow(unsigned int base, unsigned int p)
{
	if (p != 0)
	{
	return (base * _pow(base, p - 1));
	}
	else
	{
	return (1);
	}
}
/**
*binary_to_uint - fnct to change binary to decimal
* @b: String
* return - returns the results
*/

unsigned int binary_to_uint(const char *b)
{
 
	int place = 0;
	int rem = 0;
	int result = 0;
	int str;
	str = atoi(b);

	while(str != 0)
	{
		rem = str % 10;
		result = result + rem * (_pow(2, place));
		place++;
		str = str/10;
	}
	return(result);
}
