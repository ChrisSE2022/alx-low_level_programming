#include "main.h"

/**
* *_memcpy - Copies one memory data to another
* @dest: String to copy to
* @src: String to copy from
* @n:unsigned interger
*Return: Returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
