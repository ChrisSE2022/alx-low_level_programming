#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the number of arguments.
* @argc: Number of commmand arguments.
* @argv: Array of strings of the size of argc.
* Return: 0
**/

int main(int argc, char *argv[])
{

	printf("%d\n", --argc);
	(void)argv;
	return (0);

}
