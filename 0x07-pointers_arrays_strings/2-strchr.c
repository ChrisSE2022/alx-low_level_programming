#include "main.h"
#include <string.h>
/**
* *_strchr - searching for character c
* @s: Pointer
* @c: Character
* Return: Null:wq
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
