

/**
* _strlen_recursion - Prints length of a string
* @s: String
* Return:length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		s++;
	return (1 + _strlen_recursion(s));
}
