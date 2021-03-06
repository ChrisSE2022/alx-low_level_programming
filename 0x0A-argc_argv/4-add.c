#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - Prints the program name.
* @argc: Number of commmand arguments
* @argv: Array of strings of the size of argc
* Return: 0
**/

int main(int argc, char **argv)
{

	int i, sum, val;

	if (argc < 1)
	printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
	for (i = 0; argv[argc][i] != '\0'; i++)
	{
	if (!(isdigit(argv[argc][i])))
	{
	printf("Error\n");
	return (1);
	}
	}
	val = atoi(argv[argc]);
	sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
