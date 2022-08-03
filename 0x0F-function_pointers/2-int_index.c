#include "function_pointers.h"

/**
* int_index - 
* @array:
* @size: 
* @cmp: Function to a pointer
*
* Return: 
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}

