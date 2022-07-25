#include <stdlib.h>
#include <string.h>

/**
* _strdup - fn to copy string
* @str: string to copy
* Return: pointer to copied string
*/

char *_strdup(char *str)
{
	char *p_strdup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	p_strdup = malloc(sizeof(char) * (strlen(str) + 1));
	if (p_strdup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p_strdup[i] = str[i];
	}
	p_strdup[i + 1] = '\0';
	return (p_strdup);
}
