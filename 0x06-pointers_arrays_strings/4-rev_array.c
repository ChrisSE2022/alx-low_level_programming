#include "main.h"
#include <string.h>

/**
* reverse_array - Compares two strings
* @a: first interger
* @n: interger n
*
* Return: Nothing
**/
void reverse_array(int *a, int n)

{
	int i;
	int tem;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		tem = a[i];
		a[i] = a[n];
		a[n] = tem;
		i++;
		n--;
	}
}
