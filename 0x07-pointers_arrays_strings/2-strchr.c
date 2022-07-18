#include "main.h"
#include <string.h>
/**
* *_strchr - searching for character c
* @s: Pointer
* @c: Character
* Return: Null
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')

	{
	if (*s == c)
	return (s);
	s++;
	}
	if (*s == c)
	return (s);
	else
	return (NULL);
}
