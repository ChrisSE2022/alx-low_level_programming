#include <string.h>

/**
* _strcat - concatenates two strings
*
* @src:First string
* @dest:second string
*
*/
char *_strcat(char *dest, char *src)
{
	int destlen = strlen(dest);
	int srclen = strlen(src);
	char combined_string[destlen + srclen + 1];
	int i;

	for (i = 0; i < destlen; i++)
		combined_string[i] = dest[i];
	for (i = 0; i < srclen; i++)
		combined_string[i + destlen] = src[i];

	char *p = combined_string;

	return (p);
}
