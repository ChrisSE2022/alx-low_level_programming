#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates an array of strings
*@size:size of the array
*@c: Character
*Return: Return 0
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);

	if (size == 0)
	{
		free(t);
		return (NULL);
	}
	else
	i = 0;
	while (i < size)
	{
		*(t + i) = c;
		i++;
	}
	free(t);
	return (t);
}
