#include "function_pointers.h"

/**
* int_index - returns the index of the first element
* @array: The array
* @size: The size of array
* @cmp: Function to a pointer
*
* Return: Checks for success
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

